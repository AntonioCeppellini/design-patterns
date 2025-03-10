// Command Interface
interface Command {
    execute(): string;
}

// Concrete Commands
class LightOnCommand implements Command {
    constructor(private light: Light) {}
    execute(): string {
        return this.light.on();
    }
}

class LightOffCommand implements Command {
    constructor(private light: Light) {}
    execute(): string {
        return this.light.off();
    }
}

// Receiver
class Light {
    on(): string {
        return "Light is ON";
    }
    off(): string {
        return "Light is OFF";
    }
}

// Invoker
class RemoteControl {
    private command!: Command;
    setCommand(command: Command): void {
        this.command = command;
    }
    pressButton(): string {
        return this.command.execute();
    }
}

// Usage
const light = new Light();
const lightOn = new LightOnCommand(light);
const lightOff = new LightOffCommand(light);

const remote = new RemoteControl();
remote.setCommand(lightOn);
console.log(remote.pressButton()); // Output: Light is ON

remote.setCommand(lightOff);
console.log(remote.pressButton()); // Output: Light is OFF
