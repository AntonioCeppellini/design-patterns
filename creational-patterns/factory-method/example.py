from abc import ABC, abstractmethod

# abstract
class Animal(ABC):
    @abstractmethod
    def speak(self):
        pass

# concretes
class Dog(Animal):
    def speak(self):
        return "Bark!"

class Cat(Animal):
    def speak(self):
        return "Meow!"

# Factory Method
class AnimalFactory:
    @staticmethod
    def get_animal(animal_type: str) -> Animal:
        if animal_type == "dog":
            return Dog()
        elif animal_type == "cat":
            return Cat()
        else:
            raise ValueError("Unknown animal type")

# Usage
animal = AnimalFactory.get_animal("dog")
print(animal.speak())  # output: Bark!
