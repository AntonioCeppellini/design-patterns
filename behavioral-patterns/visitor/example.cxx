#include <iostream>
#include <vector>
#include <memory>

// Forward declaration
class ElementA;
class ElementB;

// Visitor Interface
class Visitor {
public:
    virtual void visitElementA(ElementA *element) = 0;
    virtual void visitElementB(ElementB *element) = 0;
};

// Element Interface
class Element {
public:
    virtual void accept(Visitor *visitor) = 0;
};

// Concrete Elements
class ElementA : public Element {
public:
    void accept(Visitor *visitor) override {
        visitor->visitElementA(this);
    }
};

class ElementB : public Element {
public:
    void accept(Visitor *visitor) override {
        visitor->visitElementB(this);
    }
};

// Concrete Visitor
class ConcreteVisitor : public Visitor {
public:
    void visitElementA(ElementA *element) override {
        std::cout << "Processing ElementA" << std::endl;
    }
    void visitElementB(ElementB *element) override {
        std::cout << "Processing ElementB" << std::endl;
    }
};

// Usage
int main() {
    std::vector<std::shared_ptr<Element>> elements = {std::make_shared<ElementA>(), std::make_shared<ElementB>()};
    ConcreteVisitor visitor;
    
    for (auto &element : elements) {
        element->accept(&visitor);
    }
    return 0;
}
