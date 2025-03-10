from abc import ABC, abstractmethod

# Component
class Coffee(ABC):
    @abstractmethod
    def cost(self):
        pass

# Concrete Component
class SimpleCoffee(Coffee):
    def cost(self):
        return 5

# Decorator
class CoffeeDecorator(Coffee):
    def __init__(self, coffee: Coffee):
        self._coffee = coffee

    def cost(self):
        return self._coffee.cost()

# Concrete Decorators
class MilkDecorator(CoffeeDecorator):
    def cost(self):
        return super().cost() + 2

class SugarDecorator(CoffeeDecorator):
    def cost(self):
        return super().cost() + 1

# Usage
coffee = SimpleCoffee()
print(coffee.cost())  # Output: 5

coffee_with_milk = MilkDecorator(coffee)
print(coffee_with_milk.cost())  # Output: 7

coffee_with_milk_sugar = SugarDecorator(coffee_with_milk)
print(coffee_with_milk_sugar.cost())  # Output: 8
