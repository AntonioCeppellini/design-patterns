#include <iostream>
#include <vector>
#include <memory>
#include <string>

class User; // Forward declaration

// Mediator Interface
class Mediator {
public:
    virtual void notify(User* sender, const std::string& message) = 0;
    virtual ~Mediator() = default;
};

// Concrete Mediator
class ChatRoom : public Mediator {
private:
    std::vector<User*> users;
public:
    void registerUser(User* user);
    void notify(User* sender, const std::string& message) override;
};

// Colleague
class User {
private:
    std::string name;
    Mediator* mediator;
public:
    User(std::string n) : name(std::move(n)), mediator(nullptr) {}
    void setMediator(Mediator* m) { mediator = m; }
    void send(const std::string& message);
    void receive(const std::string& message) {
        std::cout << name << " received: " << message << std::endl;
    }
    std::string getName() const { return name; }
};

void ChatRoom::registerUser(User* user) {
    users.push_back(user);
    user->setMediator(this);
}

void ChatRoom::notify(User* sender, const std::string& message) {
    for (User* user : users) {
        if (user != sender) {
            user->receive(message);
        }
    }
}

void User::send(const std::string& message) {
    std::cout << name << " sends: " << message << std::endl;
    mediator->notify(this, message);
}

// Usage
int main() {
    ChatRoom chat;
    User user1("Alice"), user2("Bob");
    chat.registerUser(&user1);
    chat.registerUser(&user2);
    
    user1.send("Hello, Bob!");
    return 0;
}
// Output:
// Alice sends: Hello, Bob!
// Bob received: Hello, Bob!
