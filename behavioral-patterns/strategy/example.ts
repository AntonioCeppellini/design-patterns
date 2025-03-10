// Strategy Interface
interface Strategy {
    execute(): void;
}

// Concrete Strategies
class StrategyA implements Strategy {
    execute(): void {
        console.log("Executing Strategy A");
    }
}

class StrategyB implements Strategy {
    execute(): void {
        console.log("Executing Strategy B");
    }
}

// Context
class Context {
    private strategy: Strategy;
    constructor(strategy: Strategy) {
        this.strategy = strategy;
    }
    setStrategy(strategy: Strategy): void {
        this.strategy = strategy;
    }
    executeStrategy(): void {
        this.strategy.execute();
    }
}

// Usage
const context = new Context(new StrategyA());
context.executeStrategy();  // Output: Executing Strategy A

context.setStrategy(new StrategyB());
context.executeStrategy();  // Output: Executing Strategy B
