# Visitor Pattern

## 📌 Cos'è il Visitor Pattern? (Italiano)
Il **Visitor Pattern** è un pattern comportamentale che consente di separare un algoritmo dalla struttura degli oggetti su cui opera, permettendo di aggiungere nuove operazioni senza modificare le classi degli oggetti.

🔹 **Obiettivo**: Separare la logica delle operazioni dalla struttura degli oggetti, favorendo l'estensibilità.

🔹 **Principali vantaggi:**
- **Permette di aggiungere nuove operazioni senza modificare la struttura degli oggetti**.
- **Facilita la separazione delle responsabilità e migliora la manutenibilità del codice**.
- **Evita di dover modificare classi esistenti per aggiungere nuovi comportamenti**.

---

## 📌 What is the Visitor Pattern? (English)
The **Visitor Pattern** is a behavioral pattern that allows separating an algorithm from the structure of the objects it operates on, enabling new operations to be added without modifying the object classes.

🔹 **Objective**: Separate the logic of operations from the object structure, promoting extensibility.

🔹 **Main advantages:**
- **Allows adding new operations without modifying the object structure**.
- **Facilitates separation of concerns and improves code maintainability**.
- **Avoids modifying existing classes to introduce new behaviors**.

---

## 📌 ¿Qué es el Patrón Visitor? (Español)
El **Patrón Visitor** es un patrón de comportamiento que permite separar un algoritmo de la estructura de los objetos sobre los que opera, permitiendo agregar nuevas operaciones sin modificar las clases de los objetos.

🔹 **Objetivo**: Separar la lógica de las operaciones de la estructura de los objetos, promoviendo la extensibilidad.

🔹 **Principales ventajas:**
- **Permite agregar nuevas operaciones sin modificar la estructura de los objetos**.
- **Facilita la separación de responsabilidades y mejora el mantenimiento del código**.
- **Evita modificar clases existentes para agregar nuevos comportamientos**.

---

## 📌 O que é o Padrão Visitor? (Português)
O **Padrão Visitor** é um padrão comportamental que permite separar um algoritmo da estrutura dos objetos sobre os quais opera, possibilitando adicionar novas operações sem modificar as classes dos objetos.

🔹 **Objetivo**: Separar a lógica das operações da estrutura dos objetos, promovendo a extensibilidade.

🔹 **Principais vantagens:**
- **Permite adicionar novas operações sem modificar a estrutura dos objetos**.
- **Facilita a separação de responsabilidades e melhora a manutenção do código**.
- **Evita modificar classes existentes para adicionar novos comportamentos**.

---

## 🛠️ Implementazione / Implementation / Implementación / Implementação

### ✅ **Definizione del Visitor / Defining the Visitor / Definición del Visitor / Definição do Visitor**
```python
from abc import ABC, abstractmethod

class Visitor(ABC):
    @abstractmethod
    def visit_element_a(self, element):
        pass
    
    @abstractmethod
    def visit_element_b(self, element):
        pass
```

### ✅ **Definizione degli Elementi / Defining Elements / Definición de los Elementos / Definição dos Elementos**
```python
class Element(ABC):
    @abstractmethod
    def accept(self, visitor: Visitor):
        pass

class ConcreteElementA(Element):
    def accept(self, visitor: Visitor):
        visitor.visit_element_a(self)
    
class ConcreteElementB(Element):
    def accept(self, visitor: Visitor):
        visitor.visit_element_b(self)
```

### ✅ **Implementazioni Concrete del Visitor / Concrete Visitor Implementations / Implementaciones Concretas del Visitor / Implementações Concretas do Visitor**
```python
class ConcreteVisitor(Visitor):
    def visit_element_a(self, element):
        print("Processing Element A")
    
    def visit_element_b(self, element):
        print("Processing Element B")
```

### ✅ **Utilizzo del Visitor Pattern / Using the Visitor Pattern / Uso del Patrón Visitor / Uso do Padrão Visitor**
```python
elements = [ConcreteElementA(), ConcreteElementB()]
visitor = ConcreteVisitor()

for element in elements:
    element.accept(visitor)
```

---

## 🚀 **Conclusione / Conclusion / Conclusión / Conclusão**
Se hai bisogno di **aggiungere nuove operazioni senza modificare la struttura degli oggetti**, il **Visitor Pattern** è la soluzione ideale! 💡

✅ **Permette di aggiungere nuove operazioni senza modificare le classi degli oggetti / Allows adding new operations without modifying object classes / Permite agregar nuevas operaciones sin modificar las clases de los objetos / Permite adicionar novas operações sem modificar as classes dos objetos**
✅ **Separa la logica delle operazioni dalla struttura degli oggetti / Separates operation logic from object structure / Separa la lógica de operaciones de la estructura de los objetos / Separa a lógica das operações da estrutura dos objetos**
✅ **Migliora l'estensibilità e la manutenibilità del codice / Improves extensibility and code maintainability / Mejora la extensibilidad y el mantenimiento del código / Melhora a extensibilidade e a manutenção do código**

---

### 📖 **Risorse Utili / Useful Resources / Recursos útiles / Recursos úteis**
- [Design Patterns - Visitor](https://refactoring.guru/design-patterns/visitor)

