# Visitor Interface
class Visitor:
    def visit_element_a(self, element):
        pass
    
    def visit_element_b(self, element):
        pass

# Element Interface
class Element:
    def accept(self, visitor: Visitor):
        pass

# Concrete Elements
class ElementA(Element):
    def accept(self, visitor: Visitor):
        visitor.visit_element_a(self)

class ElementB(Element):
    def accept(self, visitor: Visitor):
        visitor.visit_element_b(self)

# Concrete Visitor
class ConcreteVisitor(Visitor):
    def visit_element_a(self, element):
        print("Processing ElementA")
    
    def visit_element_b(self, element):
        print("Processing ElementB")

# Usage
elements = [ElementA(), ElementB()]
visitor = ConcreteVisitor()

for element in elements:
    element.accept(visitor)
