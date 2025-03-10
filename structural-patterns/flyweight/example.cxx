#include <iostream>
#include <unordered_map>
#include <memory>

class Flyweight {
private:
    std::string sharedState;
public:
    Flyweight(std::string state) : sharedState(std::move(state)) {}
    void operation(const std::string& uniqueState) const {
        std::cout << "Flyweight: shared=" << sharedState << ", unique=" << uniqueState << "\n";
    }
};

class FlyweightFactory {
private:
    std::unordered_map<std::string, std::shared_ptr<Flyweight>> flyweights;
public:
    std::shared_ptr<Flyweight> getFlyweight(const std::string& sharedState) {
        if (flyweights.find(sharedState) == flyweights.end()) {
            flyweights[sharedState] = std::make_shared<Flyweight>(sharedState);
        }
        return flyweights[sharedState];
    }
};

// Usage
int main() {
    FlyweightFactory factory;
    auto obj1 = factory.getFlyweight("A");
    auto obj2 = factory.getFlyweight("A");
    auto obj3 = factory.getFlyweight("B");

    obj1->operation("X"); // Output: Flyweight: shared=A, unique=X
    obj2->operation("Y"); // Output: Flyweight: shared=A, unique=Y
    obj3->operation("Z"); // Output: Flyweight: shared=B, unique=Z
    std::cout << (obj1 == obj2) << std::endl; // Output: 1 (true)
    return 0;
}
