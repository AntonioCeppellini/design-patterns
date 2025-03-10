// Component
interface Coffee {
    cost(): number;
}

// Concrete Component
class SimpleCoffee implements Coffee {
    cost(): number {
        return 5;
    }
}

// Decorator
class CoffeeDecorator implements Coffee {
    constructor(protected coffee: Coffee) {}
    cost(): number {
        return this.coffee.cost();
    }
}

// Concrete Decorators
class MilkDecorator extends CoffeeDecorator {
    cost(): number {
        return super.cost() + 2;
    }
}

class SugarDecorator extends CoffeeDecorator {
    cost(): number {
        return super.cost() + 1;
    }
}

// Usage
let coffee: Coffee = new SimpleCoffee();
console.log(coffee.cost()); // Output: 5

coffee = new MilkDecorator(coffee);
console.log(coffee.cost()); // Output: 7

coffee = new SugarDecorator(coffee);
console.log(coffee.cost()); // Output: 8
