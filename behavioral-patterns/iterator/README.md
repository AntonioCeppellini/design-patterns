# Iterator Pattern

## 📌 Cos'è l'Iterator Pattern? (Italiano)
L'**Iterator Pattern** è un pattern comportamentale che fornisce un modo per accedere agli elementi di una collezione sequenzialmente senza esporne la struttura interna.

🔹 **Obiettivo**: Separare la logica di iterazione dalla struttura della collezione.

🔹 **Principali vantaggi:**
- **Permette di iterare su una collezione senza rivelarne l'implementazione interna**.
- **Supporta diverse modalità di iterazione**.
- **Facilita l'estensione delle operazioni di iterazione senza modificare la collezione**.

---

## 📌 What is the Iterator Pattern? (English)
The **Iterator Pattern** is a behavioral pattern that provides a way to access elements of a collection sequentially without exposing its underlying structure.

🔹 **Objective**: Separate the iteration logic from the collection structure.

🔹 **Main advantages:**
- **Allows iteration over a collection without revealing its internal implementation**.
- **Supports multiple iteration strategies**.
- **Facilitates extending iteration operations without modifying the collection**.

---

## 📌 ¿Qué es el Patrón Iterator? (Español)
El **Patrón Iterator** es un patrón de comportamiento que proporciona una forma de acceder a los elementos de una colección secuencialmente sin exponer su estructura interna.

🔹 **Objetivo**: Separar la lógica de iteración de la estructura de la colección.

🔹 **Principales ventajas:**
- **Permite iterar sobre una colección sin revelar su implementación interna**.
- **Soporta múltiples estrategias de iteración**.
- **Facilita la extensión de las operaciones de iteración sin modificar la colección**.

---

## 📌 O que é o Padrão Iterator? (Português)
O **Padrão Iterator** é um padrão comportamental que fornece uma maneira de acessar os elementos de uma coleção sequencialmente sem expor sua estrutura interna.

🔹 **Objetivo**: Separar a lógica de iteração da estrutura da coleção.

🔹 **Principais vantagens:**
- **Permite iterar sobre uma coleção sem revelar sua implementação interna**.
- **Suporta múltiplas estratégias de iteração**.
- **Facilita a extensão das operações de iteração sem modificar a coleção**.

---

## 🛠️ Implementazione / Implementation / Implementación / Implementação

### ✅ **Definizione dell'Iteratore / Defining the Iterator / Definición del Iterador / Definição do Iterador**
```python
from abc import ABC, abstractmethod

class Iterator(ABC):
    @abstractmethod
    def __next__(self):
        pass

    @abstractmethod
    def has_next(self):
        pass
```

### ✅ **Implementazione dell'Iteratore Concreto / Concrete Iterator Implementation / Implementación del Iterador Concreto / Implementação do Iterador Concreto**
```python
class ConcreteIterator(Iterator):
    def __init__(self, collection):
        self._collection = collection
        self._index = 0
    
    def __next__(self):
        if self.has_next():
            value = self._collection[self._index]
            self._index += 1
            return value
        raise StopIteration
    
    def has_next(self):
        return self._index < len(self._collection)
```

### ✅ **Definizione dell'Aggregato / Defining the Aggregate / Definición del Agregado / Definição do Agregado**
```python
class Aggregate(ABC):
    @abstractmethod
    def create_iterator(self):
        pass
```

### ✅ **Implementazione dell'Aggregato Concreto / Concrete Aggregate Implementation / Implementación del Agregado Concreto / Implementação do Agregado Concreto**
```python
class ConcreteAggregate(Aggregate):
    def __init__(self, items):
        self._items = items
    
    def create_iterator(self):
        return ConcreteIterator(self._items)
```

### ✅ **Utilizzo dell'Iterator Pattern / Using the Iterator Pattern / Uso del Patrón Iterator / Uso do Padrão Iterator**
```python
collection = ConcreteAggregate(["A", "B", "C", "D"])
iterator = collection.create_iterator()

while iterator.has_next():
    print(iterator.__next__())  # Output: A B C D
```

---

## 🚀 **Conclusione / Conclusion / Conclusión / Conclusão**
Se hai bisogno di **permettere ai client di iterare su una collezione senza conoscerne i dettagli interni**, il **Iterator Pattern** è la soluzione ideale! 💡

✅ **Separa la logica di iterazione dalla collezione / Separates iteration logic from the collection / Separa la lógica de iteración de la colección / Separa a lógica de iteração da coleção**
✅ **Supporta diverse modalità di iterazione / Supports multiple iteration strategies / Soporta múltiples estrategias de iteración / Suporta múltiplas estratégias de iteração**
✅ **Facilita l'estensione e la manutenzione del codice / Facilitates code extension and maintenance / Facilita la extensión y mantenimiento del código / Facilita a extensão e manutenção do código**

---

### 📖 **Risorse Utili / Useful Resources / Recursos útiles / Recursos úteis**
- [Design Patterns - Iterator](https://refactoring.guru/design-patterns/iterator)

