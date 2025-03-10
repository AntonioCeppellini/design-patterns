// Handler
abstract class Handler {
    constructor(protected successor: Handler | null = null) {}
    abstract handleRequest(request: string): string;
}

// Concrete Handlers
class LowLevelSupport extends Handler {
    handleRequest(request: string): string {
        if (request === "low") return "LowLevelSupport: Handling request";
        return this.successor ? this.successor.handleRequest(request) : "No handler found";
    }
}

class MidLevelSupport extends Handler {
    handleRequest(request: string): string {
        if (request === "mid") return "MidLevelSupport: Handling request";
        return this.successor ? this.successor.handleRequest(request) : "No handler found";
    }
}

class HighLevelSupport extends Handler {
    handleRequest(request: string): string {
        if (request === "high") return "HighLevelSupport: Handling request";
        return this.successor ? this.successor.handleRequest(request) : "No handler found";
    }
}

// Setup Chain
const chain = new LowLevelSupport(new MidLevelSupport(new HighLevelSupport()));
console.log(chain.handleRequest("mid")); // Output: MidLevelSupport: Handling request
console.log(chain.handleRequest("high")); // Output: HighLevelSupport: Handling request
console.log(chain.handleRequest("unknown")); // Output: No handler found
