import copy

class Prototype:
    def clone(self):
        return copy.deepcopy(self)

class Car(Prototype):
    def __init__(self, brand, engine, color):
        self.brand = brand
        self.engine = engine
        self.color = color

    def __str__(self):
        return f"Car(brand={self.brand}, engine={self.engine}, color={self.color})"

# Usage
car1 = Car("Tesla", "Electric", "Red")
car2 = car1.clone()
print(car1)  # Output: Car(brand=Tesla, engine=Electric, color=Red)
print(car2)  # Output: Car(brand=Tesla, engine=Electric, color=Red)
