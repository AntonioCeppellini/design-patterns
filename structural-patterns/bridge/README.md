# Bridge Pattern

## 📌 Cos'è il Bridge Pattern? (Italiano)
Il **Bridge Pattern** è un pattern strutturale che separa un'astrazione dalla sua implementazione, permettendo loro di variare indipendentemente.

🔹 **Obiettivo**: Separare la logica di astrazione dall'implementazione per ridurre la dipendenza tra classi.

🔹 **Principali vantaggi:**
- **Favorisce la separazione tra astrazione e implementazione**.
- **Permette di sviluppare e modificare indipendentemente entrambe le parti**.
- **Rende il codice più flessibile e manutenibile**.

---

## 📌 What is the Bridge Pattern? (English)
The **Bridge Pattern** is a structural pattern that separates an abstraction from its implementation, allowing them to vary independently.

🔹 **Objective**: Separate the abstraction logic from the implementation to reduce dependencies between classes.

🔹 **Main advantages:**
- **Encourages separation between abstraction and implementation**.
- **Allows independent development and modification of both parts**.
- **Makes the code more flexible and maintainable**.

---

## 📌 ¿Qué es el Patrón Bridge? (Español)
El **Patrón Bridge** es un patrón estructural que separa una abstracción de su implementación, permitiendo que ambas evolucionen independientemente.

🔹 **Objetivo**: Separar la lógica de abstracción de la implementación para reducir la dependencia entre clases.

🔹 **Principales ventajas:**
- **Fomenta la separación entre abstracción e implementación**.
- **Permite desarrollar y modificar ambas partes de forma independiente**.
- **Hace que el código sea más flexible y mantenible**.

---

## 📌 O que é o Padrão Bridge? (Português)
O **Padrão Bridge** é um padrão estrutural que separa uma abstração da sua implementação, permitindo que ambas evoluam independentemente.

🔹 **Objetivo**: Separar a lógica de abstração da implementação para reduzir a dependência entre classes.

🔹 **Principais vantagens:**
- **Promove a separação entre abstração e implementação**.
- **Permite o desenvolvimento e modificação independente de ambas as partes**.
- **Torna o código mais flexível e fácil de manter**.

---

## 🛠️ Implementazione / Implementation / Implementación / Implementação

### ✅ **Definizione dell'Implementatore / Defining the Implementor / Definición del Implementador / Definição do Implementador**
```python
from abc import ABC, abstractmethod

class Device(ABC):
    @abstractmethod
    def enable(self):
        pass
    
    @abstractmethod
    def disable(self):
        pass
```

### ✅ **Implementazioni Concrete / Concrete Implementations / Implementaciones Concretas / Implementações Concretas**
```python
class TV(Device):
    def enable(self):
        return "TV turned on"
    
    def disable(self):
        return "TV turned off"

class Radio(Device):
    def enable(self):
        return "Radio turned on"
    
    def disable(self):
        return "Radio turned off"
```

### ✅ **Definizione dell'Astrazione / Defining the Abstraction / Definición de la Abstracción / Definição da Abstração**
```python
class RemoteControl:
    def __init__(self, device: Device):
        self.device = device
    
    def toggle_power(self):
        return self.device.enable() if isinstance(self.device, Device) else self.device.disable()
```

### ✅ **Utilizzo del Bridge / Using the Bridge / Uso del Bridge / Uso do Bridge**
```python
tv = TV()
remote = RemoteControl(tv)
print(remote.toggle_power())  # Output: TV turned on
```

---

## 🚀 **Conclusione / Conclusion / Conclusión / Conclusão**
Se hai bisogno di **separare un'astrazione dalla sua implementazione per renderle indipendenti**, il **Bridge Pattern** è la soluzione ideale! 💡

✅ **Migliora la scalabilità e la modularità del codice / Improves code scalability and modularity / Mejora la escalabilidad y modularidad del código / Melhora a escalabilidade e modularidade do código**
✅ **Permette modifiche indipendenti tra astrazione e implementazione / Allows independent modifications between abstraction and implementation / Permite modificaciones independientes entre abstracción e implementación / Permite modificações independentes entre abstração e implementação**
✅ **Facilita il riutilizzo del codice in diversi contesti / Facilitates code reuse in different contexts / Facilita la reutilización del código en diferentes contextos / Facilita a reutilização do código em diferentes contextos**

---

### 📖 **Risorse Utili / Useful Resources / Recursos útiles / Recursos úteis**
- [Design Patterns - Bridge](https://refactoring.guru/design-patterns/bridge)

