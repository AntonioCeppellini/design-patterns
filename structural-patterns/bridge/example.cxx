#include <iostream>
#include <memory>

// Implementor
class Renderer {
public:
    virtual std::string renderShape(const std::string& shape) const = 0;
    virtual ~Renderer() = default;
};

// Concrete Implementors
class RasterRenderer : public Renderer {
public:
    std::string renderShape(const std::string& shape) const override {
        return "Rendering " + shape + " as pixels";
    }
};

class VectorRenderer : public Renderer {
public:
    std::string renderShape(const std::string& shape) const override {
        return "Rendering " + shape + " as vectors";
    }
};

// Abstraction
class Shape {
protected:
    std::shared_ptr<Renderer> renderer;
public:
    Shape(std::shared_ptr<Renderer> r) : renderer(std::move(r)) {}
    virtual std::string draw() const = 0;
    virtual ~Shape() = default;
};

// Refined Abstraction
class Circle : public Shape {
public:
    using Shape::Shape;
    std::string draw() const override {
        return renderer->renderShape("Circle");
    }
};

// Usage
int main() {
    std::shared_ptr<Renderer> vectorRenderer = std::make_shared<VectorRenderer>();
    std::shared_ptr<Renderer> rasterRenderer = std::make_shared<RasterRenderer>();
    
    Circle vectorCircle(vectorRenderer);
    Circle rasterCircle(rasterRenderer);
    
    std::cout << vectorCircle.draw() << std::endl; // Output: Rendering Circle as vectors
    std::cout << rasterCircle.draw() << std::endl; // Output: Rendering Circle as pixels
    
    return 0;
}
