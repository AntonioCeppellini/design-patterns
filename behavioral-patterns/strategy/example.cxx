#include <iostream>
#include <memory>

// Strategy Interface
class Strategy {
public:
    virtual void execute() = 0;
};

// Concrete Strategies
class StrategyA : public Strategy {
public:
    void execute() override {
        std::cout << "Executing Strategy A" << std::endl;
    }
};

class StrategyB : public Strategy {
public:
    void execute() override {
        std::cout << "Executing Strategy B" << std::endl;
    }
};

// Context
class Context {
private:
    std::shared_ptr<Strategy> strategy;
public:
    Context(std::shared_ptr<Strategy> initialStrategy) : strategy(initialStrategy) {}
    void setStrategy(std::shared_ptr<Strategy> newStrategy) {
        strategy = newStrategy;
    }
    void executeStrategy() {
        strategy->execute();
    }
};

// Usage
int main() {
    auto context = std::make_shared<Context>(std::make_shared<StrategyA>());
    context->executeStrategy();  // Output: Executing Strategy A

    context->setStrategy(std::make_shared<StrategyB>());
    context->executeStrategy();  // Output: Executing Strategy B
    return 0;
}
