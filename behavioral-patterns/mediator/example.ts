// Mediator Interface
interface Mediator {
    notify(sender: User, message: string): void;
}

// Concrete Mediator
class ChatRoom implements Mediator {
    private users: User[] = [];
    register(user: User): void {
        this.users.push(user);
        user.setMediator(this);
    }
    notify(sender: User, message: string): void {
        this.users.forEach(user => {
            if (user !== sender) {
                user.receive(message);
            }
        });
    }
}

// Colleague
class User {
    private mediator!: Mediator;
    constructor(private name: string) {}
    setMediator(mediator: Mediator): void {
        this.mediator = mediator;
    }
    send(message: string): void {
        console.log(`${this.name} sends: ${message}`);
        this.mediator.notify(this, message);
    }
    receive(message: string): void {
        console.log(`${this.name} received: ${message}`);
    }
}

// Usage
const chat = new ChatRoom();
const user1 = new User("Alice");
const user2 = new User("Bob");
chat.register(user1);
chat.register(user2);

user1.send("Hello, Bob!");
// Output:
// Alice sends: Hello, Bob!
// Bob received: Hello, Bob!
