#include <iostream>

// Abstract Class
class AbstractClass {
public:
    void templateMethod() {
        step1();
        step2();
        hook();
    }
protected:
    void step1() {
        std::cout << "Step 1: Common behavior" << std::endl;
    }
    virtual void step2() = 0;
    virtual void hook() {} // Optional method
};

// Concrete Class A
class ConcreteClassA : public AbstractClass {
protected:
    void step2() override {
        std::cout << "Step 2: ConcreteClassA implementation" << std::endl;
    }
};

// Concrete Class B
class ConcreteClassB : public AbstractClass {
protected:
    void step2() override {
        std::cout << "Step 2: ConcreteClassB implementation" << std::endl;
    }
    void hook() override {
        std::cout << "Hook: ConcreteClassB additional behavior" << std::endl;
    }
};

// Usage
int main() {
    ConcreteClassA objA;
    objA.templateMethod();

    ConcreteClassB objB;
    objB.templateMethod();

    return 0;
}
