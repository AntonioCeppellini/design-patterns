// Abstract Class
abstract class AbstractClass {
    public templateMethod(): void {
        this.step1();
        this.step2();
        this.hook();
    }

    private step1(): void {
        console.log("Step 1: Common behavior");
    }

    protected abstract step2(): void;

    protected hook(): void {}  // Optional method
}

// Concrete Class A
class ConcreteClassA extends AbstractClass {
    protected step2(): void {
        console.log("Step 2: ConcreteClassA implementation");
    }
}

// Concrete Class B
class ConcreteClassB extends AbstractClass {
    protected step2(): void {
        console.log("Step 2: ConcreteClassB implementation");
    }
    protected hook(): void {
        console.log("Hook: ConcreteClassB additional behavior");
    }
}

// Usage
const objA = new ConcreteClassA();
objA.templateMethod();

const objB = new ConcreteClassB();
objB.templateMethod();
