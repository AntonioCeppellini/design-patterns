#include <iostream>
#include <vector>
#include <memory>

// Observer Interface
class Observer {
public:
    virtual void update(const std::string &message) = 0;
};

// Concrete Observer
class ConcreteObserver : public Observer {
private:
    std::string name;
public:
    ConcreteObserver(std::string n) : name(std::move(n)) {}
    void update(const std::string &message) override {
        std::cout << name << " received message: " << message << std::endl;
    }
};

// Subject
class Subject {
private:
    std::vector<std::shared_ptr<Observer>> observers;
public:
    void addObserver(std::shared_ptr<Observer> observer) {
        observers.push_back(observer);
    }
    void removeObserver(std::shared_ptr<Observer> observer) {
        observers.erase(std::remove(observers.begin(), observers.end(), observer), observers.end());
    }
    void notifyObservers(const std::string &message) {
        for (const auto &observer : observers) {
            observer->update(message);
        }
    }
};

// Usage
int main() {
    auto subject = std::make_shared<Subject>();
    auto observer1 = std::make_shared<ConcreteObserver>("Observer 1");
    auto observer2 = std::make_shared<ConcreteObserver>("Observer 2");
    
    subject->addObserver(observer1);
    subject->addObserver(observer2);
    
    subject->notifyObservers("Hello, Observers!");
    // Output:
    // Observer 1 received message: Hello, Observers!
    // Observer 2 received message: Hello, Observers!
    return 0;
}
