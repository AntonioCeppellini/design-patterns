#include <iostream>

// Subsystems
class CPU {
public:
    std::string start() const { return "CPU started"; }
};

class Memory {
public:
    std::string load() const { return "Memory loaded"; }
};

class HardDrive {
public:
    std::string read() const { return "Hard drive read"; }
};

// Facade
class ComputerFacade {
private:
    CPU cpu;
    Memory memory;
    HardDrive hardDrive;
public:
    std::string startComputer() const {
        return cpu.start() + "\n" + memory.load() + "\n" + hardDrive.read();
    }
};

// Usage
int main() {
    ComputerFacade computer;
    std::cout << computer.startComputer() << std::endl;
    return 0;
}
