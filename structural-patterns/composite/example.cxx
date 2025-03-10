#include <iostream>
#include <vector>
#include <memory>

// Component
class Graphic {
public:
    virtual void draw() const = 0;
    virtual ~Graphic() = default;
};

// Leaf
class Circle : public Graphic {
public:
    void draw() const override {
        std::cout << "Drawing a Circle" << std::endl;
    }
};

// Composite
class CompositeGraphic : public Graphic {
private:
    std::vector<std::shared_ptr<Graphic>> children;
public:
    void add(std::shared_ptr<Graphic> graphic) {
        children.push_back(graphic);
    }
    void draw() const override {
        for (const auto& child : children) {
            child->draw();
        }
    }
};

// Usage
int main() {
    auto circle1 = std::make_shared<Circle>();
    auto circle2 = std::make_shared<Circle>();
    auto group = std::make_shared<CompositeGraphic>();
    group->add(circle1);
    group->add(circle2);
    group->draw();
    return 0;
}
