# Observer Interface
class Observer:
    def update(self, message):
        pass

# Concrete Observer
class ConcreteObserver(Observer):
    def __init__(self, name):
        self.name = name
    
    def update(self, message):
        print(f"{self.name} received message: {message}")

# Subject
class Subject:
    def __init__(self):
        self._observers = []
    
    def add_observer(self, observer):
        self._observers.append(observer)
    
    def remove_observer(self, observer):
        self._observers.remove(observer)
    
    def notify_observers(self, message):
        for observer in self._observers:
            observer.update(message)

# Usage
subject = Subject()
observer1 = ConcreteObserver("Observer 1")
observer2 = ConcreteObserver("Observer 2")

subject.add_observer(observer1)
subject.add_observer(observer2)

subject.notify_observers("Hello, Observers!")
# Output:
# Observer 1 received message: Hello, Observers!
# Observer 2 received message: Hello, Observers!
