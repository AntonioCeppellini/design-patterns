#include <iostream>
#include <memory>

// Component
class Coffee {
public:
    virtual int cost() const = 0;
    virtual ~Coffee() = default;
};

// Concrete Component
class SimpleCoffee : public Coffee {
public:
    int cost() const override { return 5; }
};

// Decorator
class CoffeeDecorator : public Coffee {
protected:
    std::shared_ptr<Coffee> coffee;
public:
    CoffeeDecorator(std::shared_ptr<Coffee> c) : coffee(std::move(c)) {}
    int cost() const override { return coffee->cost(); }
};

// Concrete Decorators
class MilkDecorator : public CoffeeDecorator {
public:
    using CoffeeDecorator::CoffeeDecorator;
    int cost() const override { return CoffeeDecorator::cost() + 2; }
};

class SugarDecorator : public CoffeeDecorator {
public:
    using CoffeeDecorator::CoffeeDecorator;
    int cost() const override { return CoffeeDecorator::cost() + 1; }
};

// Usage
int main() {
    std::shared_ptr<Coffee> coffee = std::make_shared<SimpleCoffee>();
    std::cout << coffee->cost() << std::endl;  // Output: 5

    coffee = std::make_shared<MilkDecorator>(coffee);
    std::cout << coffee->cost() << std::endl;  // Output: 7

    coffee = std::make_shared<SugarDecorator>(coffee);
    std::cout << coffee->cost() << std::endl;  // Output: 8

    return 0;
}
