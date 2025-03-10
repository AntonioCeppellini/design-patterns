# Composite Pattern

## 📌 Cos'è il Composite Pattern? (Italiano)
Il **Composite Pattern** è un pattern strutturale che permette di trattare un insieme di oggetti nello stesso modo in cui si trattano oggetti singoli.

🔹 **Obiettivo**: Organizzare oggetti in una gerarchia ad albero per rappresentare relazioni parte-tutto.

🔹 **Principali vantaggi:**
- **Tratta oggetti singoli e composti in modo uniforme**.
- **Facilita la gestione delle strutture gerarchiche**.
- **Rende il codice più flessibile e scalabile**.

---

## 📌 What is the Composite Pattern? (English)
The **Composite Pattern** is a structural pattern that allows treating a group of objects the same way as a single object.

🔹 **Objective**: Organize objects into a tree hierarchy to represent part-whole relationships.

🔹 **Main advantages:**
- **Treats single objects and compositions uniformly**.
- **Simplifies management of hierarchical structures**.
- **Makes the code more flexible and scalable**.

---

## 📌 ¿Qué es el Patrón Composite? (Español)
El **Patrón Composite** es un patrón estructural que permite tratar un conjunto de objetos de la misma manera que un objeto individual.

🔹 **Objetivo**: Organizar objetos en una jerarquía de árbol para representar relaciones parte-todo.

🔹 **Principales ventajas:**
- **Permite tratar objetos individuales y compuestos de manera uniforme**.
- **Facilita la gestión de estructuras jerárquicas**.
- **Hace que el código sea más flexible y escalable**.

---

## 📌 O que é o Padrão Composite? (Português)
O **Padrão Composite** é um padrão estrutural que permite tratar um conjunto de objetos da mesma forma que um objeto individual.

🔹 **Objetivo**: Organizar objetos em uma hierarquia de árvore para representar relações parte-todo.

🔹 **Principais vantagens:**
- **Permite tratar objetos individuais e compostos de forma uniforme**.
- **Facilita a gestão de estruturas hierárquicas**.
- **Torna o código mais flexível e escalável**.

---

## 🛠️ Implementazione / Implementation / Implementación / Implementação

### ✅ **Definizione del Componente / Defining the Component / Definición del Componente / Definição do Componente**
```python
from abc import ABC, abstractmethod

class Graphic(ABC):
    @abstractmethod
    def draw(self):
        pass
```

### ✅ **Implementazioni Concrete / Concrete Implementations / Implementaciones Concretas / Implementações Concretas**
```python
class Circle(Graphic):
    def draw(self):
        return "Drawing a Circle"

class Square(Graphic):
    def draw(self):
        return "Drawing a Square"
```

### ✅ **Definizione del Composito / Defining the Composite / Definición del Compuesto / Definição do Composto**
```python
class CompositeGraphic(Graphic):
    def __init__(self):
        self.children = []
    
    def add(self, graphic: Graphic):
        self.children.append(graphic)
    
    def draw(self):
        return " | ".join(child.draw() for child in self.children)
```

### ✅ **Utilizzo del Composite / Using the Composite / Uso del Composite / Uso do Composite**
```python
circle = Circle()
square = Square()
composite = CompositeGraphic()
composite.add(circle)
composite.add(square)
print(composite.draw())  # Output: Drawing a Circle | Drawing a Square
```

---

## 🚀 **Conclusione / Conclusion / Conclusión / Conclusão**
Se hai bisogno di **gestire strutture gerarchiche in modo flessibile e uniforme**, il **Composite Pattern** è la soluzione ideale! 💡

✅ **Permette di trattare oggetti singoli e composti allo stesso modo / Allows treating single and composite objects the same way / Permite tratar objetos individuales y compuestos de la misma manera / Permite tratar objetos individuais e compostos da mesma forma**
✅ **Facilita la gestione di strutture complesse / Simplifies complex structure management / Facilita la gestión de estructuras complejas / Facilita a gestão de estruturas complexas**
✅ **Rende il codice più riutilizzabile e scalabile / Makes code more reusable and scalable / Hace que el código sea más reutilizable y escalable / Torna o código mais reutilizável e escalável**

---

### 📖 **Risorse Utili / Useful Resources / Recursos útiles / Recursos úteis**
- [Design Patterns - Composite](https://refactoring.guru/design-patterns/composite)

