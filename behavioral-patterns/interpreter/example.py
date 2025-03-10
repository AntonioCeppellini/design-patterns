from abc import ABC, abstractmethod

# Abstract Expression
class Expression(ABC):
    @abstractmethod
    def interpret(self, context: dict):
        pass

# Terminal Expression
class Number(Expression):
    def __init__(self, value):
        self.value = value
    
    def interpret(self, context: dict):
        return self.value

# Non-Terminal Expression
class Add(Expression):
    def __init__(self, left: Expression, right: Expression):
        self.left = left
        self.right = right
    
    def interpret(self, context: dict):
        return self.left.interpret(context) + self.right.interpret(context)

# Usage
expr = Add(Number(5), Number(10))
print(expr.interpret({}))  # Output: 15
