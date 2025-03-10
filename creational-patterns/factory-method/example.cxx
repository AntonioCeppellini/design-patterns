#include <iostream>
#include <memory>

class Animal {
public:
    virtual void speak() const = 0;
    virtual ~Animal() = default;
};

class Dog : public Animal {
public:
    void speak() const override {
        std::cout << "Bark!" << std::endl;
    }
};

class Cat : public Animal {
public:
    void speak() const override {
        std::cout << "Meow!" << std::endl;
    }
};

class AnimalFactory {
public:
    static std::unique_ptr<Animal> getAnimal(const std::string& type) {
        if (type == "dog") return std::make_unique<Dog>();
        if (type == "cat") return std::make_unique<Cat>();
        throw std::runtime_error("Unknown animal type");
    }
};

// Usage
int main() {
    auto animal = AnimalFactory::getAnimal("dog");
    animal->speak();  // output: Bark!
    return 0;
}
