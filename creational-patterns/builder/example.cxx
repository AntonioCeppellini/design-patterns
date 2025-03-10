#include <iostream>
#include <string>

class Car {
public:
    std::string brand;
    std::string engine;
    std::string color;

    void show() const {
        std::cout << "Car(brand=" << brand << ", engine=" << engine << ", color=" << color << ")\n";
    }
};

class CarBuilder {
private:
    Car car;
public:
    CarBuilder& setBrand(const std::string& brand) {
        car.brand = brand;
        return *this;
    }
    CarBuilder& setEngine(const std::string& engine) {
        car.engine = engine;
        return *this;
    }
    CarBuilder& setColor(const std::string& color) {
        car.color = color;
        return *this;
    }
    Car build() {
        return car;
    }
};

// Usage
int main() {
    Car car = CarBuilder().setBrand("Tesla").setEngine("Electric").setColor("Red").build();
    car.show();
    return 0;
}
