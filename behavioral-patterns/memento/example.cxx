#include <iostream>
#include <vector>
#include <memory>
#include <string>

// Memento
class Memento {
private:
    std::string state;
public:
    Memento(std::string s) : state(std::move(s)) {}
    std::string getState() const { return state; }
};

// Originator
class Editor {
private:
    std::string text;
public:
    void write(const std::string& newText) { text = newText; }
    std::shared_ptr<Memento> save() const { return std::make_shared<Memento>(text); }
    void restore(std::shared_ptr<Memento> memento) { text = memento->getState(); }
    void show() const { std::cout << text << std::endl; }
};

// Caretaker
class History {
private:
    std::vector<std::shared_ptr<Memento>> mementos;
public:
    void save(std::shared_ptr<Memento> memento) { mementos.push_back(memento); }
    std::shared_ptr<Memento> undo() {
        if (!mementos.empty()) {
            auto last = mementos.back();
            mementos.pop_back();
            return last;
        }
        return nullptr;
    }
};

// Usage
int main() {
    Editor editor;
    History history;

    editor.write("Hello, World!");
    history.save(editor.save());

    editor.write("New Text");
    editor.show();  // Output: New Text

    editor.restore(history.undo());
    editor.show();  // Output: Hello, World!

    return 0;
}
