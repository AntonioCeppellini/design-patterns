class Flyweight:
    def __init__(self, shared_state):
        self.shared_state = shared_state

    def operation(self, unique_state):
        return f"Flyweight: shared={self.shared_state}, unique={unique_state}"

class FlyweightFactory:
    _flyweights = {}

    @staticmethod
    def get_flyweight(shared_state):
        if shared_state not in FlyweightFactory._flyweights:
            FlyweightFactory._flyweights[shared_state] = Flyweight(shared_state)
        return FlyweightFactory._flyweights[shared_state]

# Usage
factory = FlyweightFactory()
obj1 = factory.get_flyweight("A")
obj2 = factory.get_flyweight("A")
obj3 = factory.get_flyweight("B")

print(obj1.operation("X"))  # Output: Flyweight: shared=A, unique=X
print(obj2.operation("Y"))  # Output: Flyweight: shared=A, unique=Y
print(obj3.operation("Z"))  # Output: Flyweight: shared=B, unique=Z
print(obj1 is obj2)  # Output: True 
