# Builder Pattern

## 📌 Cos'è il Builder Pattern? (Italiano)
Il **Builder Pattern** è un pattern creazionale che separa la costruzione di un oggetto complesso dalla sua rappresentazione, permettendo di creare oggetti passo dopo passo.

🔹 **Obiettivo**: Creare oggetti complessi in modo modulare e flessibile.

🔹 **Principali vantaggi:**
- **Separazione tra costruzione e rappresentazione**.
- **Facilita la creazione di oggetti con molte varianti**.
- **Evita la creazione di costruttori con troppi parametri**.

---

## 📌 What is the Builder Pattern? (English)
The **Builder Pattern** is a creational pattern that separates the construction of a complex object from its representation, allowing objects to be created step by step.

🔹 **Objective**: Create complex objects in a modular and flexible way.

🔹 **Main advantages:**
- **Separation between construction and representation**.
- **Easier creation of objects with many variants**.
- **Avoids constructors with too many parameters**.

---

## 📌 ¿Qué es el Patrón Builder? (Español)
El **Patrón Builder** es un patrón creacional que separa la construcción de un objeto complejo de su representación, permitiendo crear objetos paso a paso.

🔹 **Objetivo**: Crear objetos complejos de manera modular y flexible.

🔹 **Principales ventajas:**
- **Separación entre construcción y representación**.
- **Facilita la creación de objetos con muchas variantes**.
- **Evita constructores con demasiados parámetros**.

---

## 📌 O que é o Padrão Builder? (Português)
O **Padrão Builder** é um padrão criacional que separa a construção de um objeto complexo da sua representação, permitindo a criação de objetos passo a passo.

🔹 **Objetivo**: Criar objetos complexos de maneira modular e flexível.

🔹 **Principais vantagens:**
- **Separação entre construção e representação**.
- **Facilita a criação de objetos com muitas variações**.
- **Evita construtores com muitos parâmetros**.

---

## 🛠️ Implementazione / Implementation / Implementación / Implementação

### ✅ **Definizione del Builder / Defining the Builder / Definición del Builder / Definição do Builder**
```python
from abc import ABC, abstractmethod

class CarBuilder(ABC):
    @abstractmethod
    def set_engine(self, engine):
        pass
    
    @abstractmethod
    def set_wheels(self, wheels):
        pass
    
    @abstractmethod
    def set_color(self, color):
        pass
```

### ✅ **Implementazione del Builder / Builder Implementation / Implementación del Builder / Implementação do Builder**
```python
class ConcreteCarBuilder(CarBuilder):
    def __init__(self):
        self.car = {}
    
    def set_engine(self, engine):
        self.car['engine'] = engine
        return self
    
    def set_wheels(self, wheels):
        self.car['wheels'] = wheels
        return self
    
    def set_color(self, color):
        self.car['color'] = color
        return self
    
    def build(self):
        return self.car
```

### ✅ **Utilizzo del Builder / Using the Builder / Uso del Builder / Uso do Builder**
```python
builder = ConcreteCarBuilder()
car = builder.set_engine("V8").set_wheels(4).set_color("Red").build()
print(car)  # Output: {'engine': 'V8', 'wheels': 4, 'color': 'Red'}
```

---

## 🚀 **Conclusione / Conclusion / Conclusión / Conclusão**
Se hai bisogno di **costruire oggetti complessi passo dopo passo**, il **Builder Pattern** è la soluzione ideale! 💡

✅ **Migliora la modularità e la leggibilità del codice / Improves modularity and code readability / Mejora la modularidad y la legibilidad del código / Melhora a modularidade e a legibilidade do código**
✅ **Facilita la gestione di oggetti con molte proprietà / Facilitates the management of objects with many properties / Facilita la gestión de objetos con muchas propiedades / Facilita a gestão de objetos com muitas propriedades**
✅ **Evita costruttori lunghi e complessi / Avoids long and complex constructors / Evita constructores largos y complejos / Evita construtores longos e complexos**

---

### 📖 **Risorse Utili / Useful Resources / Recursos útiles / Recursos úteis**
- [Design Patterns - Builder](https://refactoring.guru/design-patterns/builder)
