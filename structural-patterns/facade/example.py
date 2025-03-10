# Subsystems
class CPU:
    def start(self):
        return "CPU started"

class Memory:
    def load(self):
        return "Memory loaded"

class HardDrive:
    def read(self):
        return "Hard drive read"

# Facade
class ComputerFacade:
    def __init__(self):
        self.cpu = CPU()
        self.memory = Memory()
        self.hard_drive = HardDrive()
    
    def start_computer(self):
        return f"{self.cpu.start()}\n{self.memory.load()}\n{self.hard_drive.read()}"

# Usage
computer = ComputerFacade()
print(computer.start_computer())
# Output:
# CPU started
# Memory loaded
# Hard drive read
