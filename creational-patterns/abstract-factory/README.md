# Abstract Method Pattern

## 📌 Cos'è l'Abstract Method? (Italiano)
L'**Abstract Method** è un metodo dichiarato in una classe astratta che deve essere obbligatoriamente implementato dalle sottoclassi concrete.

🔹 **Obiettivo**: Fornire una struttura comune per classi diverse, forzando l'implementazione di metodi specifici.

🔹 **Principali vantaggi:**
- **Forza l'implementazione** di determinati metodi nelle sottoclassi.
- **Migliora l'organizzazione del codice** seguendo il principio di responsabilità singola (SRP).
- **Supporta il polimorfismo**, permettendo di scrivere codice più generico.

---

## 📌 What is the Abstract Method? (English)
The **Abstract Method** is a method declared in an abstract class that must be implemented by concrete subclasses.

🔹 **Objective**: Provide a common structure for different classes, enforcing the implementation of specific methods.

🔹 **Main advantages:**
- **Forces implementation** of certain methods in subclasses.
- **Improves code organization** by following the Single Responsibility Principle (SRP).
- **Supports polymorphism**, allowing more generic and reusable code.

---

## 📌 ¿Qué es el Método Abstracto? (Español)
El **Método Abstracto** es un método declarado en una clase abstracta que debe ser implementado obligatoriamente por las subclases concretas.

🔹 **Objetivo**: Proporcionar una estructura común para diferentes clases, forzando la implementación de métodos específicos.

🔹 **Principales ventajas:**
- **Obliga a la implementación** de ciertos métodos en las subclases.
- **Mejora la organización del código** siguiendo el principio de responsabilidad única (SRP).
- **Soporta el polimorfismo**, permitiendo escribir código más genérico y reutilizable.

---

## 📌 O que é o Método Abstrato? (Português)
O **Método Abstrato** é um método declarado em uma classe abstrata que deve ser obrigatoriamente implementado por subclasses concretas.

🔹 **Objetivo**: Fornecer uma estrutura comum para diferentes classes, forçando a implementação de métodos específicos.

🔹 **Principais vantagens:**
- **Força a implementação** de certos métodos em subclasses.
- **Melhora a organização do código** seguindo o princípio da responsabilidade única (SRP).
- **Suporta o polimorfismo**, permitindo a escrita de código mais genérico e reutilizável.

---

## 🛠️ Implementazione / Implementation / Implementación / Implementação

### ✅ **Dichiarazione di un metodo astratto / Declaring an abstract method / Declaración de un método abstracto / Declaração de um método abstrato**
```python
from abc import ABC, abstractmethod

class Animal(ABC):
    @abstractmethod
    def make_sound(self):
        pass
```

### ✅ **Implementazioni concrete / Concrete implementations / Implementaciones concretas / Implementações concretas**
```python
class Dog(Animal):
    def make_sound(self):
        return "Bark!"

class Cat(Animal):
    def make_sound(self):
        return "Meow!"
```

### ✅ **Utilizzo dell'Abstract Method / Using the Abstract Method / Uso del Método Abstracto / Uso do Método Abstrato**
```python
def animal_sound(animal: Animal):
    print(animal.make_sound())

animal_sound(Dog())  # Output: Bark!
animal_sound(Cat())  # Output: Meow!
```

---

## 🚀 **Conclusione / Conclusion / Conclusión / Conclusão**

✅ **Garantisce un'implementazione coerente / Ensures consistent implementation / Garantiza una implementación coherente / Garante uma implementação consistente**
✅ **Facilita il riutilizzo del codice / Facilitates code reuse / Facilita la reutilización del código / Facilita a reutilização do código**
✅ **Supporta il polimorfismo e il design modulare / Supports polymorphism and modular design / Soporta el polimorfismo y el diseño modular / Suporta o polimorfismo e o design modular**

---

### 📖 **Risorse Utili / Useful Resources / Recursos útiles / Recursos úteis**
- [Abstract Method - Python Documentation](https://docs.python.org/3/library/abc.html)

