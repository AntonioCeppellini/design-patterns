from abc import ABC, abstractmethod

# Mediator Interface
class Mediator(ABC):
    @abstractmethod
    def notify(self, sender, event):
        pass

# Concrete Mediator
class ChatRoom(Mediator):
    def __init__(self):
        self.users = []
    
    def register(self, user):
        self.users.append(user)
        user.mediator = self
    
    def notify(self, sender, message):
        for user in self.users:
            if user != sender:
                user.receive(message)

# Colleague
class User:
    def __init__(self, name):
        self.name = name
        self.mediator = None
    
    def send(self, message):
        print(f"{self.name} sends: {message}")
        self.mediator.notify(self, message)
    
    def receive(self, message):
        print(f"{self.name} received: {message}")

# Usage
chat = ChatRoom()
user1 = User("Alice")
user2 = User("Bob")
chat.register(user1)
chat.register(user2)

user1.send("Hello, Bob!")
# Output:
# Alice sends: Hello, Bob!
# Bob received: Hello, Bob!
