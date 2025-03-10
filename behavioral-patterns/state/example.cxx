#include <iostream>
#include <memory>

// State Interface
class State {
public:
    virtual void handle() = 0;
};

// Concrete States
class StateA : public State {
public:
    void handle() override {
        std::cout << "Handling State A" << std::endl;
    }
};

class StateB : public State {
public:
    void handle() override {
        std::cout << "Handling State B" << std::endl;
    }
};

// Context
class Context {
private:
    std::shared_ptr<State> state;
public:
    Context(std::shared_ptr<State> initialState) : state(initialState) {}
    void setState(std::shared_ptr<State> newState) {
        state = newState;
    }
    void request() {
        state->handle();
    }
};

// Usage
int main() {
    auto context = std::make_shared<Context>(std::make_shared<StateA>());
    context->request();  // Output: Handling State A

    context->setState(std::make_shared<StateB>());
    context->request();  // Output: Handling State B
    return 0;
}
