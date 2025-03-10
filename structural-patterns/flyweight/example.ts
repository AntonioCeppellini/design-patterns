class Flyweight {
    constructor(private sharedState: string) {}

    operation(uniqueState: string): string {
        return `Flyweight: shared=${this.sharedState}, unique=${uniqueState}`;
    }
}

class FlyweightFactory {
    private static flyweights: Map<string, Flyweight> = new Map();

    static getFlyweight(sharedState: string): Flyweight {
        if (!this.flyweights.has(sharedState)) {
            this.flyweights.set(sharedState, new Flyweight(sharedState));
        }
        return this.flyweights.get(sharedState)!;
    }
}

// Usage
const factory = FlyweightFactory;
const obj1 = factory.getFlyweight("A");
const obj2 = factory.getFlyweight("A");
const obj3 = factory.getFlyweight("B");

console.log(obj1.operation("X")); // Output: Flyweight: shared=A, unique=X
console.log(obj2.operation("Y")); // Output: Flyweight: shared=A, unique=Y
console.log(obj3.operation("Z")); // Output: Flyweight: shared=B, unique=Z
console.log(obj1 === obj2); // Output: true
