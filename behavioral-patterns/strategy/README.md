# Strategy Pattern

## 📌 Cos'è lo Strategy Pattern? (Italiano)
Lo **Strategy Pattern** è un pattern comportamentale che permette di definire una famiglia di algoritmi, incapsularli e renderli intercambiabili, separando la logica dell'algoritmo dal contesto in cui viene utilizzato.

🔹 **Obiettivo**: Separare il comportamento specifico (strategia) dall'oggetto che lo utilizza, consentendo di cambiarlo dinamicamente.

🔹 **Principali vantaggi:**
- **Elimina la necessità di numerosi `if-else` o `switch` nidificati**.
- **Permette di cambiare dinamicamente il comportamento di un oggetto**.
- **Favorisce l'estensibilità e la manutenibilità del codice**.

---

## 📌 What is the Strategy Pattern? (English)
The **Strategy Pattern** is a behavioral pattern that allows defining a family of algorithms, encapsulating them, and making them interchangeable, separating the algorithm logic from the context in which it is used.

🔹 **Objective**: Separate specific behavior (strategy) from the object that uses it, allowing it to change dynamically.

🔹 **Main advantages:**
- **Eliminates the need for numerous nested `if-else` or `switch` statements**.
- **Allows dynamic change of an object's behavior**.
- **Enhances code extensibility and maintainability**.

---

## 📌 ¿Qué es el Patrón Strategy? (Español)
El **Patrón Strategy** es un patrón de comportamiento que permite definir una familia de algoritmos, encapsularlos y hacerlos intercambiables, separando la lógica del algoritmo del contexto en el que se usa.

🔹 **Objetivo**: Separar el comportamiento específico (estrategia) del objeto que lo usa, permitiendo cambiarlo dinámicamente.

🔹 **Principales ventajas:**
- **Elimina la necesidad de múltiples estructuras `if-else` o `switch` anidadas**.
- **Permite cambiar dinámicamente el comportamiento de un objeto**.
- **Facilita la extensibilidad y el mantenimiento del código**.

---

## 📌 O que é o Padrão Strategy? (Português)
O **Padrão Strategy** é um padrão comportamental que permite definir uma família de algoritmos, encapsulá-los e torná-los intercambiáveis, separando a lógica do algoritmo do contexto onde é utilizado.

🔹 **Objetivo**: Separar o comportamento específico (estratégia) do objeto que o utiliza, permitindo alterá-lo dinamicamente.

🔹 **Principais vantagens:**
- **Elimina a necessidade de várias estruturas `if-else` ou `switch` aninhadas**.
- **Permite alterar dinamicamente o comportamento de um objeto**.
- **Facilita a extensibilidade e a manutenção do código**.

---

## 🛠️ Implementazione / Implementation / Implementación / Implementação

### ✅ **Definizione della Strategia / Defining the Strategy / Definición de la Estrategia / Definição da Estratégia**
```python
from abc import ABC, abstractmethod

class Strategy(ABC):
    @abstractmethod
    def execute(self, data):
        pass
```

### ✅ **Implementazioni Concrete della Strategia / Concrete Strategy Implementations / Implementaciones Concretas de la Estrategia / Implementações Concretas da Estratégia**
```python
class ConcreteStrategyA(Strategy):
    def execute(self, data):
        return f"Strategy A executed with {data}"

class ConcreteStrategyB(Strategy):
    def execute(self, data):
        return f"Strategy B executed with {data}"
```

### ✅ **Definizione del Contesto / Defining the Context / Definición del Contexto / Definição do Contexto**
```python
class Context:
    def __init__(self, strategy: Strategy):
        self._strategy = strategy
    
    def set_strategy(self, strategy: Strategy):
        self._strategy = strategy
    
    def execute_strategy(self, data):
        return self._strategy.execute(data)
```

### ✅ **Utilizzo dello Strategy Pattern / Using the Strategy Pattern / Uso del Patrón Strategy / Uso do Padrão Strategy**
```python
context = Context(ConcreteStrategyA())
print(context.execute_strategy("data"))  # Output: Strategy A executed with data

context.set_strategy(ConcreteStrategyB())
print(context.execute_strategy("data"))  # Output: Strategy B executed with data
```

---

## 🚀 **Conclusione / Conclusion / Conclusión / Conclusão**
Se hai bisogno di **separare la logica di un algoritmo dall'oggetto che lo utilizza e rendere le strategie intercambiabili**, il **Strategy Pattern** è la soluzione ideale! 💡

✅ **Elimina il bisogno di `if-else` nidificati / Eliminates the need for nested `if-else` statements / Elimina la necesidad de `if-else` anidados / Elimina a necessidade de `if-else` aninhados**
✅ **Permette il cambio dinamico di strategia / Enables dynamic strategy switching / Permite cambiar dinámicamente la estrategia / Permite a troca dinâmica de estratégia**
✅ **Migliora la separazione delle responsabilità e la manutenibilità / Improves separation of concerns and maintainability / Mejora la separación de responsabilidades y la mantenibilidad / Melhora a separação de responsabilidades e a manutenção**

---

### 📖 **Risorse Utili / Useful Resources / Recursos útiles / Recursos úteis**
- [Design Patterns - Strategy](https://refactoring.guru/design-patterns/strategy)
