// Visitor Interface
interface Visitor {
    visitElementA(element: ElementA): void;
    visitElementB(element: ElementB): void;
}

// Element Interface
interface Element {
    accept(visitor: Visitor): void;
}

// Concrete Elements
class ElementA implements Element {
    accept(visitor: Visitor): void {
        visitor.visitElementA(this);
    }
}

class ElementB implements Element {
    accept(visitor: Visitor): void {
        visitor.visitElementB(this);
    }
}

// Concrete Visitor
class ConcreteVisitor implements Visitor {
    visitElementA(element: ElementA): void {
        console.log("Processing ElementA");
    }
    visitElementB(element: ElementB): void {
        console.log("Processing ElementB");
    }
}

// Usage
const elements: Element[] = [new ElementA(), new ElementB()];
const visitor = new ConcreteVisitor();

elements.forEach(element => element.accept(visitor));
