#include <iostream>
#include <memory>

class Prototype {
public:
    virtual std::unique_ptr<Prototype> clone() const = 0;
    virtual ~Prototype() = default;
};

class Car : public Prototype {
public:
    std::string brand;
    std::string engine;
    std::string color;

    Car(std::string b, std::string e, std::string c) : brand(b), engine(e), color(c) {}

    std::unique_ptr<Prototype> clone() const override {
        return std::make_unique<Car>(*this);
    }

    void show() const {
        std::cout << "Car(brand=" << brand << ", engine=" << engine << ", color=" << color << ")\n";
    }
};

// Usage
int main() {
    auto car1 = std::make_unique<Car>("Tesla", "Electric", "Red");
    auto car2 = car1->clone();

    car1->show();  // Output: Car(brand=Tesla, engine=Electric, color=Red)
    car2->show();  // Output: Car(brand=Tesla, engine=Electric, color=Red)

    return 0;
}
