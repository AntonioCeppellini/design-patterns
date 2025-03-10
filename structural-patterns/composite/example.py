from abc import ABC, abstractmethod

# Component
class Graphic(ABC):
    @abstractmethod
    def draw(self):
        pass

# Leaf
class Circle(Graphic):
    def draw(self):
        return "Drawing a Circle"

# Composite
class CompositeGraphic(Graphic):
    def __init__(self):
        self.children = []
    
    def add(self, graphic: Graphic):
        self.children.append(graphic)
    
    def draw(self):
        results = [child.draw() for child in self.children]
        return "\n".join(results)

# Usage
circle1 = Circle()
circle2 = Circle()
group = CompositeGraphic()
group.add(circle1)
group.add(circle2)
print(group.draw())
# Output:
# Drawing a Circle
# Drawing a Circle
