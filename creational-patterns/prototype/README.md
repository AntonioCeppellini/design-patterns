# Prototype Pattern

## 📌 Cos'è il Prototype Pattern? (Italiano)
Il **Prototype Pattern** è un pattern creazionale che permette di clonare oggetti esistenti senza doverli ricreare da zero, evitando il costo della creazione manuale.

🔹 **Obiettivo**: Creare nuovi oggetti copiando un'istanza esistente invece di istanziarla direttamente.

🔹 **Principali vantaggi:**
- **Riduce il costo della creazione di oggetti complessi**.
- **Permette la clonazione di oggetti senza dipendere direttamente dalla loro classe concreta**.
- **Migliora le prestazioni in scenari in cui la creazione è costosa**.

---

## 📌 What is the Prototype Pattern? (English)
The **Prototype Pattern** is a creational pattern that allows cloning existing objects instead of creating them from scratch, reducing the cost of manual creation.

🔹 **Objective**: Create new objects by copying an existing instance instead of instantiating them directly.

🔹 **Main advantages:**
- **Reduces the cost of creating complex objects**.
- **Allows object cloning without depending on concrete classes**.
- **Improves performance in scenarios where object creation is expensive**.

---

## 📌 ¿Qué es el Patrón Prototype? (Español)
El **Patrón Prototype** es un patrón creacional que permite clonar objetos existentes en lugar de crearlos desde cero, reduciendo el costo de la creación manual.

🔹 **Objetivo**: Crear nuevos objetos copiando una instancia existente en lugar de instanciarla directamente.

🔹 **Principales ventajas:**
- **Reduce el costo de la creación de objetos complejos**.
- **Permite la clonación de objetos sin depender de clases concretas**.
- **Mejora el rendimiento en escenarios donde la creación de objetos es costosa**.

---

## 📌 O que é o Padrão Prototype? (Português)
O **Padrão Prototype** é um padrão criacional que permite clonar objetos existentes em vez de criá-los do zero, reduzindo o custo da criação manual.

🔹 **Objetivo**: Criar novos objetos copiando uma instância existente em vez de instanciá-la diretamente.

🔹 **Principais vantagens:**
- **Reduz o custo da criação de objetos complexos**.
- **Permite a clonagem de objetos sem depender de classes concretas**.
- **Melhora o desempenho em cenários onde a criação de objetos é custosa**.

---

## 🛠️ Implementazione / Implementation / Implementación / Implementação

### ✅ **Definizione del Prototype / Defining the Prototype / Definición del Prototype / Definição do Prototype**
```python
import copy

class Prototype:
    def clone(self):
        return copy.deepcopy(self)
```

### ✅ **Implementazione del Prototype / Prototype Implementation / Implementación del Prototype / Implementação do Prototype**
```python
class ConcretePrototype(Prototype):
    def __init__(self, value):
        self.value = value
```

### ✅ **Utilizzo del Prototype / Using the Prototype / Uso del Prototype / Uso do Prototype**
```python
prototype = ConcretePrototype("Original Object")
clone = prototype.clone()
print(clone.value)  # Output: Original Object
```

---

## 🚀 **Conclusione / Conclusion / Conclusión / Conclusão**
Se hai bisogno di **clonare oggetti senza ricreare ogni volta una nuova istanza**, il **Prototype Pattern** è la soluzione ideale! 💡

✅ **Migliora l'efficienza della creazione degli oggetti / Improves efficiency of object creation / Mejora la eficiencia en la creación de objetos / Melhora a eficiência da criação de objetos**
✅ **Evita dipendenze da classi concrete / Avoids dependencies on concrete classes / Evita dependencias en clases concretas / Evita dependências de classes concretas**
✅ **Facilita la creazione di oggetti con stato complesso / Facilitates the creation of objects with complex state / Facilita la creación de objetos con estado complejo / Facilita a criação de objetos com estado complexo**

---

### 📖 **Risorse Utili / Useful Resources / Recursos útiles / Recursos úteis**
- [Design Patterns - Prototype](https://refactoring.guru/design-patterns/prototype)
