// Observer Interface
interface Observer {
    update(message: string): void;
}

// Concrete Observer
class ConcreteObserver implements Observer {
    constructor(private name: string) {}
    update(message: string): void {
        console.log(`${this.name} received message: ${message}`);
    }
}

// Subject
class Subject {
    private observers: Observer[] = [];
    
    addObserver(observer: Observer): void {
        this.observers.push(observer);
    }
    
    removeObserver(observer: Observer): void {
        this.observers = this.observers.filter(obs => obs !== observer);
    }
    
    notifyObservers(message: string): void {
        this.observers.forEach(observer => observer.update(message));
    }
}

// Usage
const subject = new Subject();
const observer1 = new ConcreteObserver("Observer 1");
const observer2 = new ConcreteObserver("Observer 2");

subject.addObserver(observer1);
subject.addObserver(observer2);

subject.notifyObservers("Hello, Observers!");
// Output:
// Observer 1 received message: Hello, Observers!
// Observer 2 received message: Hello, Observers!
