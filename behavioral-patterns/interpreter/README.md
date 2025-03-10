# Interpreter Pattern

## 📌 Cos'è l'Interpreter Pattern? (Italiano)
L'**Interpreter Pattern** è un pattern comportamentale che viene utilizzato per definire una grammatica e un interprete per il suo linguaggio.

🔹 **Obiettivo**: Fornire un modo per interpretare ed eseguire istruzioni definite da una grammatica specifica.

🔹 **Principali vantaggi:**
- **Facilita l'implementazione di linguaggi personalizzati o DSL (Domain-Specific Languages)**.
- **Permette di interpretare comandi in modo strutturato e modulare**.
- **Rende il codice più flessibile e manutenibile**.

---

## 📌 What is the Interpreter Pattern? (English)
The **Interpreter Pattern** is a behavioral pattern used to define a grammar and an interpreter for its language.

🔹 **Objective**: Provide a way to interpret and execute instructions defined by a specific grammar.

🔹 **Main advantages:**
- **Facilitates the implementation of custom languages or DSLs (Domain-Specific Languages)**.
- **Allows structured and modular interpretation of commands**.
- **Makes code more flexible and maintainable**.

---

## 📌 ¿Qué es el Patrón Interpreter? (Español)
El **Patrón Interpreter** es un patrón de comportamiento que se utiliza para definir una gramática y un intérprete para su lenguaje.

🔹 **Objetivo**: Proporcionar una manera de interpretar y ejecutar instrucciones definidas por una gramática específica.

🔹 **Principales ventajas:**
- **Facilita la implementación de lenguajes personalizados o DSLs (Domain-Specific Languages)**.
- **Permite interpretar comandos de manera estructurada y modular**.
- **Hace que el código sea más flexible y mantenible**.

---

## 📌 O que é o Padrão Interpreter? (Português)
O **Padrão Interpreter** é um padrão comportamental usado para definir uma gramática e um interpretador para sua linguagem.

🔹 **Objetivo**: Fornecer uma maneira de interpretar e executar instruções definidas por uma gramática específica.

🔹 **Principais vantagens:**
- **Facilita a implementação de linguagens personalizadas ou DSLs (Domain-Specific Languages)**.
- **Permite a interpretação estruturada e modular de comandos**.
- **Torna o código mais flexível e fácil de manter**.

---

## 🛠️ Implementazione / Implementation / Implementación / Implementação

### ✅ **Definizione dell'Espressione / Defining the Expression / Definición de la Expresión / Definição da Expressão**
```python
from abc import ABC, abstractmethod

class Expression(ABC):
    @abstractmethod
    def interpret(self, context):
        pass
```

### ✅ **Implementazioni Concrete / Concrete Implementations / Implementaciones Concretas / Implementações Concretas**
```python
class NumberExpression(Expression):
    def __init__(self, number):
        self.number = number
    
    def interpret(self, context):
        return self.number

class AddExpression(Expression):
    def __init__(self, left: Expression, right: Expression):
        self.left = left
        self.right = right
    
    def interpret(self, context):
        return self.left.interpret(context) + self.right.interpret(context)
```

### ✅ **Utilizzo dell'Interpreter / Using the Interpreter / Uso del Interpreter / Uso do Interpreter**
```python
context = {}
expression = AddExpression(NumberExpression(5), NumberExpression(3))
print(expression.interpret(context))  # Output: 8
```

---

## 🚀 **Conclusione / Conclusion / Conclusión / Conclusão**
Se hai bisogno di **implementare un linguaggio o un interprete per una grammatica specifica**, il **Interpreter Pattern** è la soluzione ideale! 💡

✅ **Permette di definire ed eseguire linguaggi personalizzati / Enables defining and executing custom languages / Permite definir y ejecutar lenguajes personalizados / Permite definir e executar linguagens personalizadas**
✅ **Facilita la gestione di espressioni complesse / Simplifies handling of complex expressions / Facilita la gestión de expresiones complejas / Facilita o gerenciamento de expressões complexas**
✅ **Rende il codice più strutturato e modulare / Makes code more structured and modular / Hace que el código sea más estructurado y modular / Torna o código mais estruturado e modular**

---

### 📖 **Risorse Utili / Useful Resources / Recursos útiles / Recursos úteis**
- [Design Patterns - Interpreter](https://refactoring.guru/design-patterns/interpreter)

