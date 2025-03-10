# Factory Method Pattern

## 📌 Cos'è il Factory Method? (Italiano)
Il **Factory Method** è un pattern creazionale che fornisce un'interfaccia per creare oggetti, delegando la scelta della classe concreta alle sottoclassi.

🔹 **Obiettivo**: nascondere i dettagli di creazione degli oggetti e rendere il codice più flessibile.

🔹 **Principali vantaggi:**
- **Decoupling**: Il codice client non conosce le classi concrete.
- **Facilità di estensione**: Aggiungere nuovi oggetti è semplice.
- **Centralizzazione della logica di creazione**.
- **Applicazione del principio di Inversione delle Dipendenze (DIP)**.

---

## 📌 What is the Factory Method? (English)
The **Factory Method** is a creational pattern that provides an interface for creating objects while delegating the decision of which concrete class to instantiate to the subclasses.

🔹 **Objective**: Hide the details of object creation and make the code more flexible.

🔹 **Main advantages:**
- **Decoupling**: The client code does not need to know concrete classes.
- **Easy extension**: Adding new objects is simple.
- **Centralized creation logic**.
- **Application of the Dependency Inversion Principle (DIP)**.

---

## 📌 ¿Qué es el Factory Method? (Español)
El **Factory Method** es un patrón creacional que proporciona una interfaz para crear objetos, delegando la elección de la clase concreta a las subclases.

🔹 **Objetivo**: Ocultar los detalles de la creación de objetos y hacer el código más flexible.

🔹 **Principales ventajas:**
- **Desacoplamiento**: El código cliente no necesita conocer las clases concretas.
- **Facilidad de extensión**: Agregar nuevos objetos es sencillo.
- **Lógica de creación centralizada**.
- **Aplicación del Principio de Inversión de Dependencias (DIP)**.

---

## 📌 O que é o Factory Method? (Português)
O **Factory Method** é um padrão criacional que fornece uma interface para criar objetos, delegando a escolha da classe concreta para as subclasses.

🔹 **Objetivo**: Ocultar os detalhes da criação de objetos e tornar o código mais flexível.

🔹 **Principais vantagens:**
- **Desacoplamento**: O código cliente não precisa conhecer as classes concretas.
- **Facilidade de extensão**: Adicionar novos objetos é simples.
- **Lógica de criação centralizada**.
- **Aplicação do Princípio da Inversão de Dependência (DIP)**.

---

## 🛠️ Implementazione / Implementation / Implementación / Implementação

### ✅ **Interfaccia comune per i prodotti / Common interface for products / Interfaz común para productos / Interface comum para produtos**
```python
from abc import ABC, abstractmethod

class Product(ABC):
    @abstractmethod
    def operation(self):
        pass
```

### ✅ **Implementazioni concrete dei prodotti / Concrete product implementations / Implementaciones concretas de productos / Implementações concretas de produtos**
```python
class ConcreteProductA(Product):
    def operation(self):
        return "Product A created"

class ConcreteProductB(Product):
    def operation(self):
        return "Product B created"
```

### ✅ **Classe Factory con Factory Method / Factory Class with Factory Method / Clase Factory con Factory Method / Classe Factory com Factory Method**
```python
class Creator(ABC):
    @abstractmethod
    def factory_method(self) -> Product:
        pass
    
    def some_operation(self):
        product = self.factory_method()
        return f"Creator: {product.operation()}"
```

### ✅ **Implementazioni concrete del Factory Method / Concrete Factory Method implementations / Implementaciones concretas del Factory Method / Implementações concretas do Factory Method**
```python
class ConcreteCreatorA(Creator):
    def factory_method(self) -> Product:
        return ConcreteProductA()

class ConcreteCreatorB(Creator):
    def factory_method(self) -> Product:
        return ConcreteProductB()
```

### ✅ **Utilizzo del Factory Method / Using the Factory Method / Uso del Factory Method / Uso do Factory Method**
```python
def client_code(creator: Creator):
    print(creator.some_operation())

client_code(ConcreteCreatorA())  # Output: Creator: Product A created
client_code(ConcreteCreatorB())  # Output: Creator: Product B created
```

---

## 🏆 Quando usare il Factory Method? / When to use Factory Method? / ¿Cuándo usar Factory Method? / Quando usar Factory Method?

### **1️⃣ Quando non vuoi legare il codice a classi concrete / When you don’t want to tie the code to concrete classes / Cuando no quieres vincular el código a clases concretas / Quando você não quer vincular o código a classes concretas**
```python
class DatabaseFactory:
    @staticmethod
    def get_database(db_type: str):
        if db_type == "mysql":
            return MySQLDatabase()
        elif db_type == "postgresql":
            return PostgreSQLDatabase()
        else:
            raise ValueError("Unsupported database type")
```

---

## 🚀 **Conclusione / Conclusion / Conclusión / Conclusão**
Se hai bisogno di **flessibilità nella creazione degli oggetti**, il **Factory Method** è la soluzione ideale! 💡

✅ **Migliora la manutenibilità / Improves maintainability / Mejora la mantenibilidad / Melhora a manutenibilidade**
✅ **Rende il codice più scalabile / Makes code more scalable / Hace el código más escalable / Torna o código mais escalável**
✅ **Permette di aggiungere nuove classi senza modificare il codice esistente / Allows adding new classes without modifying existing code / Permite agregar nuevas clases sin modificar el código existente / Permite adicionar novas classes sem modificar o código existente**

---

### 📖 **Risorse Utili / Useful Resources / Recursos útiles / Recursos úteis**
- [Design Patterns - Factory Method](https://refactoring.guru/design-patterns/factory-method)
