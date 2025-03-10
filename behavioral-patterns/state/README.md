# State Pattern

## 📌 Cos'è lo State Pattern? (Italiano)
Lo **State Pattern** è un pattern comportamentale che permette a un oggetto di cambiare il proprio comportamento quando cambia il suo stato interno, senza modificare il codice dell'oggetto stesso.

🔹 **Obiettivo**: Separare la logica degli stati e le transizioni per evitare il proliferare di istruzioni condizionali `if-else` o `switch`.

🔹 **Principali vantaggi:**
- **Evita complessi blocchi condizionali**.
- **Migliora la manutenibilità del codice separando la logica di stato**.
- **Facilita l'aggiunta di nuovi stati senza modificare l'oggetto principale**.

---

## 📌 What is the State Pattern? (English)
The **State Pattern** is a behavioral pattern that allows an object to change its behavior when its internal state changes, without modifying its code.

🔹 **Objective**: Separate state logic and transitions to avoid excessive `if-else` or `switch` statements.

🔹 **Main advantages:**
- **Avoids complex conditional blocks**.
- **Improves maintainability by separating state logic**.
- **Facilitates adding new states without modifying the main object**.

---

## 📌 ¿Qué es el Patrón State? (Español)
El **Patrón State** es un patrón de comportamiento que permite que un objeto cambie su comportamiento cuando su estado interno cambia, sin modificar su código.

🔹 **Objetivo**: Separar la lógica de estados y transiciones para evitar bloques condicionales `if-else` o `switch` complejos.

🔹 **Principales ventajas:**
- **Evita bloques condicionales complejos**.
- **Mejora la mantenibilidad separando la lógica de estado**.
- **Facilita la adición de nuevos estados sin modificar el objeto principal**.

---

## 📌 O que é o Padrão State? (Português)
O **Padrão State** é um padrão comportamental que permite que um objeto mude seu comportamento quando seu estado interno muda, sem modificar seu código.

🔹 **Objetivo**: Separar a lógica dos estados e transições para evitar blocos condicionais `if-else` ou `switch` complexos.

🔹 **Principais vantagens:**
- **Evita blocos condicionais complexos**.
- **Melhora a manutenção separando a lógica de estado**.
- **Facilita a adição de novos estados sem modificar o objeto principal**.

---

## 🛠️ Implementazione / Implementation / Implementación / Implementação

### ✅ **Definizione dello Stato / Defining the State / Definición del Estado / Definição do Estado**
```python
from abc import ABC, abstractmethod

class State(ABC):
    @abstractmethod
    def handle(self, context):
        pass
```

### ✅ **Implementazioni Concrete dello Stato / Concrete State Implementations / Implementaciones Concretas del Estado / Implementações Concretas do Estado**
```python
class ConcreteStateA(State):
    def handle(self, context):
        print("Handling state A. Switching to state B.")
        context.state = ConcreteStateB()

class ConcreteStateB(State):
    def handle(self, context):
        print("Handling state B. Switching to state A.")
        context.state = ConcreteStateA()
```

### ✅ **Definizione del Contesto / Defining the Context / Definición del Contexto / Definição do Contexto**
```python
class Context:
    def __init__(self, state: State):
        self.state = state
    
    def request(self):
        self.state.handle(self)
```

### ✅ **Utilizzo dello State Pattern / Using the State Pattern / Uso del Patrón State / Uso do Padrão State**
```python
context = Context(ConcreteStateA())
context.request()  # Output: Handling state A. Switching to state B.
context.request()  # Output: Handling state B. Switching to state A.
```

---

## 🚀 **Conclusione / Conclusion / Conclusión / Conclusão**
Se hai bisogno di **gestire stati multipli in un oggetto senza usare grandi blocchi condizionali**, il **State Pattern** è la soluzione ideale! 💡

✅ **Elimina il bisogno di `if-else` complessi / Eliminates the need for complex `if-else` statements / Elimina la necesidad de `if-else` complejos / Elimina a necessidade de `if-else` complexos**
✅ **Migliora la separazione delle responsabilità / Improves separation of concerns / Mejora la separación de responsabilidades / Melhora a separação de responsabilidades**
✅ **Facilita l'aggiunta di nuovi stati senza modificare il codice esistente / Facilitates adding new states without modifying existing code / Facilita la adición de nuevos estados sin modificar el código existente / Facilita a adição de novos estados sem modificar o código existente**

---

### 📖 **Risorse Utili / Useful Resources / Recursos útiles / Recursos úteis**
- [Design Patterns - State](https://refactoring.guru/design-patterns/state)
