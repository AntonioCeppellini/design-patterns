# Flyweight Pattern

## 📌 Cos'è il Flyweight Pattern? (Italiano)
Il **Flyweight Pattern** è un pattern strutturale che ottimizza l'uso della memoria condividendo oggetti simili invece di crearne di nuovi per ogni istanza.

🔹 **Obiettivo**: Ridurre il consumo di memoria creando un numero limitato di oggetti condivisi.

🔹 **Principali vantaggi:**
- **Riduce l'uso della memoria condividendo oggetti simili**.
- **Migliora le prestazioni riducendo la creazione di oggetti duplicati**.
- **Aumenta l'efficienza in applicazioni con un numero elevato di istanze simili**.

---

## 📌 What is the Flyweight Pattern? (English)
The **Flyweight Pattern** is a structural pattern that optimizes memory usage by sharing similar objects instead of creating new ones for every instance.

🔹 **Objective**: Reduce memory consumption by creating a limited number of shared objects.

🔹 **Main advantages:**
- **Reduces memory usage by sharing similar objects**.
- **Improves performance by minimizing duplicate object creation**.
- **Enhances efficiency in applications with many similar instances**.

---

## 📌 ¿Qué es el Patrón Flyweight? (Español)
El **Patrón Flyweight** es un patrón estructural que optimiza el uso de memoria compartiendo objetos similares en lugar de crear nuevos para cada instancia.

🔹 **Objetivo**: Reducir el consumo de memoria creando un número limitado de objetos compartidos.

🔹 **Principales ventajas:**
- **Reduce el uso de memoria compartiendo objetos similares**.
- **Mejora el rendimiento reduciendo la creación de objetos duplicados**.
- **Aumenta la eficiencia en aplicaciones con muchas instancias similares**.

---

## 📌 O que é o Padrão Flyweight? (Português)
O **Padrão Flyweight** é um padrão estrutural que otimiza o uso de memória ao compartilhar objetos semelhantes, em vez de criar novos para cada instância.

🔹 **Objetivo**: Reduzir o consumo de memória criando um número limitado de objetos compartilhados.

🔹 **Principais vantagens:**
- **Reduz o uso de memória ao compartilhar objetos semelhantes**.
- **Melhora o desempenho ao minimizar a criação de objetos duplicados**.
- **Aumenta a eficiência em aplicações com muitas instâncias semelhantes**.

---

## 🛠️ Implementazione / Implementation / Implementación / Implementação

### ✅ **Definizione del Flyweight / Defining the Flyweight / Definición del Flyweight / Definição do Flyweight**
```python
class Flyweight:
    def __init__(self, shared_state):
        self.shared_state = shared_state

    def operation(self, unique_state):
        return f"Flyweight: Shared({self.shared_state}) Unique({unique_state})"
```

### ✅ **Implementazione del Flyweight Factory / Flyweight Factory Implementation / Implementación de la Fábrica de Flyweight / Implementação da Fábrica de Flyweight**
```python
class FlyweightFactory:
    _flyweights = {}

    @staticmethod
    def get_flyweight(shared_state):
        if shared_state not in FlyweightFactory._flyweights:
            FlyweightFactory._flyweights[shared_state] = Flyweight(shared_state)
        return FlyweightFactory._flyweights[shared_state]
```

### ✅ **Utilizzo del Flyweight / Using the Flyweight / Uso del Flyweight / Uso do Flyweight**
```python
factory = FlyweightFactory()
flyweight1 = factory.get_flyweight("Shared1")
print(flyweight1.operation("Unique1"))  # Output: Flyweight: Shared(Shared1) Unique(Unique1)

flyweight2 = factory.get_flyweight("Shared1")
print(flyweight2.operation("Unique2"))  # Output: Flyweight: Shared(Shared1) Unique(Unique2)

print(flyweight1 is flyweight2)  # Output: True (stessa istanza condivisa)
```

---

## 🚀 **Conclusione / Conclusion / Conclusión / Conclusão**
Se hai bisogno di **ottimizzare l'uso della memoria e ridurre la creazione di oggetti duplicati**, il **Flyweight Pattern** è la soluzione ideale! 💡

✅ **Riduce il consumo di memoria condividendo oggetti simili / Reduces memory consumption by sharing similar objects / Reduce el consumo de memoria compartiendo objetos similares / Reduz o consumo de memória ao compartilhar objetos semelhantes**
✅ **Migliora le prestazioni riducendo la creazione di oggetti duplicati / Improves performance by minimizing duplicate object creation / Mejora el rendimiento reduciendo la creación de objetos duplicados / Melhora o desempenho ao minimizar a criação de objetos duplicados**
✅ **Aumenta l'efficienza nelle applicazioni con molte istanze simili / Enhances efficiency in applications with many similar instances / Aumenta la eficiencia en aplicaciones con muchas instancias similares / Aumenta a eficiência em aplicações com muitas instâncias semelhantes**

---

### 📖 **Risorse Utili / Useful Resources / Recursos útiles / Recursos úteis**
- [Design Patterns - Flyweight](https://refactoring.guru/design-patterns/flyweight)
