// Subsystems
class CPU {
    start(): string {
        return "CPU started";
    }
}

class Memory {
    load(): string {
        return "Memory loaded";
    }
}

class HardDrive {
    read(): string {
        return "Hard drive read";
    }
}

// Facade
class ComputerFacade {
    private cpu: CPU = new CPU();
    private memory: Memory = new Memory();
    private hardDrive: HardDrive = new HardDrive();

    startComputer(): string {
        return `${this.cpu.start()}\n${this.memory.load()}\n${this.hardDrive.read()}`;
    }
}

// Usage
const computer = new ComputerFacade();
console.log(computer.startComputer());
// Output:
// CPU started
// Memory loaded
// Hard drive read
