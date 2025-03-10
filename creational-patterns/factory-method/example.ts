abstract class Animal {
    abstract speak(): string;
}

class Dog extends Animal {
    speak(): string {
        return "Bark!";
    }
}

class Cat extends Animal {
    speak(): string {
        return "Meow!";
    }
}

class AnimalFactory {
    static getAnimal(animalType: string): Animal {
        switch (animalType) {
            case "dog": return new Dog();
            case "cat": return new Cat();
            default: throw new Error("Unknown animal type");
        }
    }
}

// Usage
const animal = AnimalFactory.getAnimal("dog");
console.log(animal.speak()); // output: Bark!
