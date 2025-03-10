#include <iostream>
#include <memory>

// Command Interface
class Command {
public:
    virtual std::string execute() = 0;
    virtual ~Command() = default;
};

// Receiver
class Light {
public:
    std::string on() { return "Light is ON"; }
    std::string off() { return "Light is OFF"; }
};

// Concrete Commands
class LightOnCommand : public Command {
private:
    Light& light;
public:
    LightOnCommand(Light& l) : light(l) {}
    std::string execute() override {
        return light.on();
    }
};

class LightOffCommand : public Command {
private:
    Light& light;
public:
    LightOffCommand(Light& l) : light(l) {}
    std::string execute() override {
        return light.off();
    }
};

// Invoker
class RemoteControl {
private:
    std::unique_ptr<Command> command;
public:
    void setCommand(std::unique_ptr<Command> cmd) {
        command = std::move(cmd);
    }
    std::string pressButton() {
        return command->execute();
    }
};

// Usage
int main() {
    Light light;
    RemoteControl remote;
    
    remote.setCommand(std::make_unique<LightOnCommand>(light));
    std::cout << remote.pressButton() << std::endl; // Output: Light is ON

    remote.setCommand(std::make_unique<LightOffCommand>(light));
    std::cout << remote.pressButton() << std::endl; // Output: Light is OFF
    
    return 0;
}
