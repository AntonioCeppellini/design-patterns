// State Interface
interface State {
    handle(): void;
}

// Concrete States
class StateA implements State {
    handle(): void {
        console.log("Handling State A");
    }
}

class StateB implements State {
    handle(): void {
        console.log("Handling State B");
    }
}

// Context
class Context {
    private state: State;
    constructor(state: State) {
        this.state = state;
    }
    setState(state: State): void {
        this.state = state;
    }
    request(): void {
        this.state.handle();
    }
}

// Usage
const context = new Context(new StateA());
context.request();  // Output: Handling State A

context.setState(new StateB());
context.request();  // Output: Handling State B
