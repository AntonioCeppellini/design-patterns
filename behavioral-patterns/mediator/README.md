# Mediator Pattern

## 📌 Cos'è il Mediator Pattern? (Italiano)
Il **Mediator Pattern** è un pattern comportamentale che definisce un oggetto che incapsula il modo in cui un insieme di oggetti interagisce, promuovendo un basso accoppiamento.

🔹 **Obiettivo**: Centralizzare la comunicazione tra oggetti per ridurre le dipendenze dirette tra loro.

🔹 **Principali vantaggi:**
- **Riduce le dipendenze tra gli oggetti, migliorando la modularità**.
- **Favorisce un codice più manutenibile e meno accoppiato**.
- **Facilita l'estensione e la gestione delle interazioni tra oggetti**.

---

## 📌 What is the Mediator Pattern? (English)
The **Mediator Pattern** is a behavioral pattern that defines an object that encapsulates how a set of objects interact, promoting loose coupling.

🔹 **Objective**: Centralize communication between objects to reduce direct dependencies.

🔹 **Main advantages:**
- **Reduces dependencies between objects, improving modularity**.
- **Encourages more maintainable and less coupled code**.
- **Facilitates extending and managing interactions between objects**.

---

## 📌 ¿Qué es el Patrón Mediator? (Español)
El **Patrón Mediator** es un patrón de comportamiento que define un objeto que encapsula cómo interactúan un conjunto de objetos, promoviendo un acoplamiento débil.

🔹 **Objetivo**: Centralizar la comunicación entre objetos para reducir las dependencias directas.

🔹 **Principales ventajas:**
- **Reduce las dependencias entre los objetos, mejorando la modularidad**.
- **Fomenta un código más mantenible y menos acoplado**.
- **Facilita la extensión y gestión de las interacciones entre objetos**.

---

## 📌 O que é o Padrão Mediator? (Português)
O **Padrão Mediator** é um padrão comportamental que define um objeto que encapsula como um conjunto de objetos interage, promovendo um baixo acoplamento.

🔹 **Objetivo**: Centralizar a comunicação entre objetos para reduzir as dependências diretas.

🔹 **Principais vantagens:**
- **Reduz as dependências entre os objetos, melhorando a modularidade**.
- **Promove um código mais fácil de manter e menos acoplado**.
- **Facilita a extensão e o gerenciamento das interações entre objetos**.

---

## 🛠️ Implementazione / Implementation / Implementación / Implementação

### ✅ **Definizione del Mediatore / Defining the Mediator / Definición del Mediador / Definição do Mediador**
```python
from abc import ABC, abstractmethod

class Mediator(ABC):
    @abstractmethod
    def notify(self, sender, event):
        pass
```

### ✅ **Implementazione del Mediatore Concreto / Concrete Mediator Implementation / Implementación del Mediador Concreto / Implementação do Mediador Concreto**
```python
class ConcreteMediator(Mediator):
    def __init__(self, component_a, component_b):
        self._component_a = component_a
        self._component_b = component_b
        self._component_a.mediator = self
        self._component_b.mediator = self
    
    def notify(self, sender, event):
        if event == "A":
            return self._component_b.do_b()
        elif event == "B":
            return self._component_a.do_a()
```

### ✅ **Definizione dei Componenti / Defining Components / Definición de Componentes / Definição de Componentes**
```python
class BaseComponent:
    def __init__(self, mediator=None):
        self.mediator = mediator

class ComponentA(BaseComponent):
    def do_a(self):
        return "Component A triggered"

class ComponentB(BaseComponent):
    def do_b(self):
        return "Component B triggered"
```

### ✅ **Utilizzo del Mediator / Using the Mediator / Uso del Mediador / Uso do Mediador**
```python
component_a = ComponentA()
component_b = ComponentB()
mediator = ConcreteMediator(component_a, component_b)

print(mediator.notify(component_a, "A"))  # Output: Component B triggered
print(mediator.notify(component_b, "B"))  # Output: Component A triggered
```

---

## 🚀 **Conclusione / Conclusion / Conclusión / Conclusão**
Se hai bisogno di **ridurre le dipendenze dirette tra gli oggetti e centralizzare la comunicazione**, il **Mediator Pattern** è la soluzione ideale! 💡

✅ **Riduce il numero di dipendenze tra oggetti / Reduces the number of dependencies between objects / Reduce el número de dependencias entre objetos / Reduz o número de dependências entre objetos**
✅ **Centralizza la comunicazione per migliorare la manutenibilità / Centralizes communication to improve maintainability / Centraliza la comunicación para mejorar la mantenibilidad / Centraliza a comunicação para melhorar a manutenção**
✅ **Facilita l'aggiunta di nuovi componenti senza modificare altri oggetti / Facilitates adding new components without modifying other objects / Facilita la adición de nuevos componentes sin modificar otros objetos / Facilita a adição de novos componentes sem modificar outros objetos**

---

### 📖 **Risorse Utili / Useful Resources / Recursos útiles / Recursos úteis**
- [Design Patterns - Mediator](https://refactoring.guru/design-patterns/mediator)

