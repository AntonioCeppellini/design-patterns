# Template Method Pattern

## 📌 Cos'è il Template Method Pattern? (Italiano)
Il **Template Method Pattern** è un pattern comportamentale che definisce la struttura generale di un algoritmo in una classe base e delega i dettagli specifici alle sottoclassi.

🔹 **Obiettivo**: Fornire una struttura comune per più algoritmi con variazioni minime, evitando la duplicazione di codice.

🔹 **Principali vantaggi:**
- **Favorisce il riutilizzo del codice e la riduzione della duplicazione**.
- **Permette di estendere il comportamento senza modificare la struttura principale**.
- **Rispetta il principio di inversione delle dipendenze (DIP) e il principio aperto-chiuso (OCP).**

---

## 📌 What is the Template Method Pattern? (English)
The **Template Method Pattern** is a behavioral pattern that defines the general structure of an algorithm in a base class and delegates specific details to subclasses.

🔹 **Objective**: Provide a common structure for multiple algorithms with minimal variations, avoiding code duplication.

🔹 **Main advantages:**
- **Encourages code reuse and reduces duplication**.
- **Allows extending behavior without modifying the main structure**.
- **Respects the Dependency Inversion Principle (DIP) and Open/Closed Principle (OCP).**

---

## 📌 ¿Qué es el Patrón Template Method? (Español)
El **Patrón Template Method** es un patrón de comportamiento que define la estructura general de un algoritmo en una clase base y delega los detalles específicos a las subclases.

🔹 **Objetivo**: Proporcionar una estructura común para múltiples algoritmos con variaciones mínimas, evitando la duplicación de código.

🔹 **Principales ventajas:**
- **Fomenta la reutilización del código y reduce la duplicación**.
- **Permite extender el comportamiento sin modificar la estructura principal**.
- **Respeta el principio de inversión de dependencias (DIP) y el principio abierto/cerrado (OCP).**

---

## 📌 O que é o Padrão Template Method? (Português)
O **Padrão Template Method** é um padrão comportamental que define a estrutura geral de um algoritmo em uma classe base e delega detalhes específicos para subclasses.

🔹 **Objetivo**: Fornecer uma estrutura comum para vários algoritmos com variações mínimas, evitando a duplicação de código.

🔹 **Principais vantagens:**
- **Promove a reutilização de código e reduz a duplicação**.
- **Permite estender o comportamento sem modificar a estrutura principal**.
- **Respeita o Princípio da Inversão de Dependências (DIP) e o Princípio Aberto/Fechado (OCP).**

---

## 🛠️ Implementazione / Implementation / Implementación / Implementação

### ✅ **Definizione della Classe Astratta / Defining the Abstract Class / Definición de la Clase Abstracta / Definição da Classe Abstrata**
```python
from abc import ABC, abstractmethod

class TemplateMethod(ABC):
    def template_method(self):
        self.step_one()
        self.step_two()
        self.hook()
    
    @abstractmethod
    def step_one(self):
        pass
    
    @abstractmethod
    def step_two(self):
        pass
    
    def hook(self):
        pass  # Metodo opzionale che può essere sovrascritto
```

### ✅ **Implementazioni Concrete / Concrete Implementations / Implementaciones Concretas / Implementações Concretas**
```python
class ConcreteClassA(TemplateMethod):
    def step_one(self):
        print("ConcreteClassA: Step One")
    
    def step_two(self):
        print("ConcreteClassA: Step Two")

class ConcreteClassB(TemplateMethod):
    def step_one(self):
        print("ConcreteClassB: Step One")
    
    def step_two(self):
        print("ConcreteClassB: Step Two")
    
    def hook(self):
        print("ConcreteClassB: Hook Executed")
```

### ✅ **Utilizzo del Template Method Pattern / Using the Template Method Pattern / Uso del Patrón Template Method / Uso do Padrão Template Method**
```python
obj_a = ConcreteClassA()
obj_a.template_method()

obj_b = ConcreteClassB()
obj_b.template_method()
```

---

## 🚀 **Conclusione / Conclusion / Conclusión / Conclusão**
Se hai bisogno di **fornire una struttura comune per più algoritmi con variazioni minime**, il **Template Method Pattern** è la soluzione ideale! 💡

✅ **Favorisce la riusabilità del codice e riduce la duplicazione / Encourages code reuse and reduces duplication / Fomenta la reutilización del código y reduce la duplicación / Promove a reutilização de código e reduz a duplicação**
✅ **Permette l'estensione del comportamento senza modificare la struttura principale / Allows extending behavior without modifying the main structure / Permite extender el comportamiento sin modificar la estructura principal / Permite estender o comportamento sem modificar a estrutura principal**
✅ **Rispetta il principio di inversione delle dipendenze e il principio aperto-chiuso / Respects the Dependency Inversion Principle and Open/Closed Principle / Respeta el principio de inversión de dependencias y el principio abierto/cerrado / Respeita o Princípio da Inversão de Dependências e o Princípio Aberto/Fechado**

---

### 📖 **Risorse Utili / Useful Resources / Recursos útiles / Recursos úteis**
- [Design Patterns - Template Method](https://refactoring.guru/design-patterns/template-method)

