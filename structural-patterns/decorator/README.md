# Decorator Pattern

## 📌 Cos'è il Decorator Pattern? (Italiano)
Il **Decorator Pattern** è un pattern strutturale che permette di aggiungere funzionalità a un oggetto in modo dinamico senza modificare il suo codice originale.

🔹 **Obiettivo**: Estendere il comportamento degli oggetti in modo flessibile e componibile.

🔹 **Principali vantaggi:**
- **Aggiunge funzionalità senza modificare il codice originale**.
- **Permette la composizione dinamica di comportamenti**.
- **Evita l'uso eccessivo dell'ereditarietà**.

---

## 📌 What is the Decorator Pattern? (English)
The **Decorator Pattern** is a structural pattern that allows dynamically adding functionality to an object without modifying its original code.

🔹 **Objective**: Extend object behavior in a flexible and composable way.

🔹 **Main advantages:**
- **Adds functionality without modifying the original code**.
- **Allows dynamic composition of behaviors**.
- **Avoids excessive use of inheritance**.

---

## 📌 ¿Qué es el Patrón Decorator? (Español)
El **Patrón Decorator** es un patrón estructural que permite agregar funcionalidades a un objeto de manera dinámica sin modificar su código original.

🔹 **Objetivo**: Extender el comportamiento de los objetos de manera flexible y componible.

🔹 **Principales ventajas:**
- **Agrega funcionalidades sin modificar el código original**.
- **Permite la composición dinámica de comportamientos**.
- **Evita el uso excesivo de la herencia**.

---

## 📌 O que é o Padrão Decorator? (Português)
O **Padrão Decorator** é um padrão estrutural que permite adicionar funcionalidades a um objeto de maneira dinâmica sem modificar seu código original.

🔹 **Objetivo**: Estender o comportamento dos objetos de maneira flexível e componível.

🔹 **Principais vantagens:**
- **Adiciona funcionalidades sem modificar o código original**.
- **Permite a composição dinâmica de comportamentos**.
- **Evita o uso excessivo da herança**.

---

## 🛠️ Implementazione / Implementation / Implementación / Implementação

### ✅ **Definizione del Componente / Defining the Component / Definición del Componente / Definição do Componente**
```python
from abc import ABC, abstractmethod

class Coffee(ABC):
    @abstractmethod
    def cost(self):
        pass
```

### ✅ **Implementazione Concreta / Concrete Implementation / Implementación Concreta / Implementação Concreta**
```python
class SimpleCoffee(Coffee):
    def cost(self):
        return 5
```

### ✅ **Definizione del Decorator / Defining the Decorator / Definición del Decorador / Definição do Decorador**
```python
class CoffeeDecorator(Coffee):
    def __init__(self, coffee: Coffee):
        self._coffee = coffee
    
    def cost(self):
        return self._coffee.cost()
```

### ✅ **Implementazioni Concrete del Decorator / Concrete Decorator Implementations / Implementaciones Concretas del Decorador / Implementações Concretas do Decorador**
```python
class MilkDecorator(CoffeeDecorator):
    def cost(self):
        return super().cost() + 2

class SugarDecorator(CoffeeDecorator):
    def cost(self):
        return super().cost() + 1
```

### ✅ **Utilizzo del Decorator / Using the Decorator / Uso del Decorator / Uso do Decorator**
```python
coffee = SimpleCoffee()
coffee_with_milk = MilkDecorator(coffee)
coffee_with_milk_sugar = SugarDecorator(coffee_with_milk)

print(coffee_with_milk_sugar.cost())  # Output: 8
```

---

## 🚀 **Conclusione / Conclusion / Conclusión / Conclusão**
Se hai bisogno di **aggiungere funzionalità a un oggetto in modo dinamico senza modificarlo**, il **Decorator Pattern** è la soluzione ideale! 💡

✅ **Estende il comportamento degli oggetti senza modificarli / Extends object behavior without modifying them / Extiende el comportamiento de los objetos sin modificarlos / Estende o comportamento dos objetos sem modificá-los**
✅ **Permette la composizione flessibile delle funzionalità / Allows flexible composition of functionalities / Permite la composición flexible de funcionalidades / Permite a composição flexível de funcionalidades**
✅ **Evita la proliferazione di sottoclassi inutili / Prevents unnecessary subclass proliferation / Evita la proliferación de subclases innecesarias / Evita a proliferação desnecessária de subclasses**

---

### 📖 **Risorse Utili / Useful Resources / Recursos útiles / Recursos úteis**
- [Design Patterns - Decorator](https://refactoring.guru/design-patterns/decorator)
