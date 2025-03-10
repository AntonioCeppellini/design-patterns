# Observer Pattern

## 📌 Cos'è l'Observer Pattern? (Italiano)
L'**Observer Pattern** è un pattern comportamentale che permette a un oggetto (soggetto) di notificare automaticamente più oggetti osservatori quando il suo stato cambia.

🔹 **Obiettivo**: Stabilire un meccanismo di notifica tra un soggetto e più osservatori.

🔹 **Principali vantaggi:**
- **Consente la comunicazione tra oggetti senza accoppiamento rigido**.
- **Supporta la reattività e la programmazione event-driven**.
- **Permette di aggiornare automaticamente più osservatori in base ai cambiamenti del soggetto**.

---

## 📌 What is the Observer Pattern? (English)
The **Observer Pattern** is a behavioral pattern that allows an object (subject) to automatically notify multiple observer objects when its state changes.

🔹 **Objective**: Establish a notification mechanism between a subject and multiple observers.

🔹 **Main advantages:**
- **Enables communication between objects without tight coupling**.
- **Supports reactivity and event-driven programming**.
- **Allows automatic updates of multiple observers based on subject changes**.

---

## 📌 ¿Qué es el Patrón Observer? (Español)
El **Patrón Observer** es un patrón de comportamiento que permite que un objeto (sujeto) notifique automáticamente a múltiples observadores cuando su estado cambia.

🔹 **Objetivo**: Establecer un mecanismo de notificación entre un sujeto y múltiples observadores.

🔹 **Principales ventajas:**
- **Permite la comunicación entre objetos sin acoplamiento fuerte**.
- **Soporta la programación reactiva y basada en eventos**.
- **Permite la actualización automática de múltiples observadores en función de los cambios del sujeto**.

---

## 📌 O que é o Padrão Observer? (Português)
O **Padrão Observer** é um padrão comportamental que permite que um objeto (sujeito) notifique automaticamente vários observadores quando seu estado muda.

🔹 **Objetivo**: Estabelecer um mecanismo de notificação entre um sujeito e múltiplos observadores.

🔹 **Principais vantagens:**
- **Permite comunicação entre objetos sem forte acoplamento**.
- **Suporta programação reativa e orientada a eventos**.
- **Permite atualização automática de múltiplos observadores com base em mudanças no sujeito**.

---

## 🛠️ Implementazione / Implementation / Implementación / Implementação

### ✅ **Definizione del Soggetto / Defining the Subject / Definición del Sujeto / Definição do Sujeito**
```python
from abc import ABC, abstractmethod

class Subject(ABC):
    def __init__(self):
        self._observers = []
    
    def attach(self, observer):
        self._observers.append(observer)
    
    def detach(self, observer):
        self._observers.remove(observer)
    
    def notify(self):
        for observer in self._observers:
            observer.update(self)
```

### ✅ **Implementazione del Soggetto Concreto / Concrete Subject Implementation / Implementación del Sujeto Concreto / Implementação do Sujeito Concreto**
```python
class ConcreteSubject(Subject):
    def __init__(self, state):
        super().__init__()
        self._state = state
    
    def set_state(self, state):
        self._state = state
        self.notify()
    
    def get_state(self):
        return self._state
```

### ✅ **Definizione dell'Osservatore / Defining the Observer / Definición del Observador / Definição do Observador**
```python
class Observer(ABC):
    @abstractmethod
    def update(self, subject):
        pass
```

### ✅ **Implementazione dell'Osservatore Concreto / Concrete Observer Implementation / Implementación del Observador Concreto / Implementação do Observador Concreto**
```python
class ConcreteObserver(Observer):
    def update(self, subject):
        print(f"Observer notified: new state = {subject.get_state()}")
```

### ✅ **Utilizzo dell'Observer Pattern / Using the Observer Pattern / Uso del Patrón Observer / Uso do Padrão Observer**
```python
subject = ConcreteSubject("Initial State")
observer1 = ConcreteObserver()
observer2 = ConcreteObserver()

subject.attach(observer1)
subject.attach(observer2)

subject.set_state("New State")  # Output: Observer notified: new state = New State (x2)
```

---

## 🚀 **Conclusione / Conclusion / Conclusión / Conclusão**
Se hai bisogno di **stabilire un meccanismo di notifica tra un soggetto e più osservatori**, il **Observer Pattern** è la soluzione ideale! 💡

✅ **Consente notifiche automatiche sugli aggiornamenti di stato / Enables automatic notifications on state updates / Permite notificaciones automáticas sobre actualizaciones de estado / Permite notificações automáticas sobre atualizações de estado**
✅ **Migliora la modularità separando il soggetto dagli osservatori / Improves modularity by separating the subject from observers / Mejora la modularidad separando el sujeto de los observadores / Melhora a modularidade separando o sujeito dos observadores**
✅ **Riduce la dipendenza tra gli oggetti promuovendo un'architettura più flessibile / Reduces dependency between objects promoting a more flexible architecture / Reduce la dependencia entre objetos promoviendo una arquitectura más flexible / Reduz a dependência entre objetos promovendo uma arquitetura mais flexível**

---

### 📖 **Risorse Utili / Useful Resources / Recursos útiles / Recursos úteis**
- [Design Patterns - Observer](https://refactoring.guru/design-patterns/observer)

