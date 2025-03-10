# Singleton Pattern

## 📌 Cos'è il Singleton Pattern? (Italiano)
Il **Singleton Pattern** è un pattern creazionale che garantisce che una classe abbia una sola istanza e fornisce un punto di accesso globale ad essa.

🔹 **Obiettivo**: Evitare la creazione di più istanze della stessa classe e fornire un'unica istanza condivisa.

🔹 **Principali vantaggi:**
- **Evita la creazione di istanze multiple della stessa classe**.
- **Fornisce un punto di accesso globale all'istanza**.
- **Migliora l'efficienza nell'uso delle risorse condivise**.

---

## 📌 What is the Singleton Pattern? (English)
The **Singleton Pattern** is a creational pattern that ensures a class has only one instance and provides a global access point to it.

🔹 **Objective**: Prevent the creation of multiple instances of the same class and provide a single shared instance.

🔹 **Main advantages:**
- **Prevents multiple instances of the same class**.
- **Provides a global access point to the instance**.
- **Improves efficiency in resource management**.

---

## 📌 ¿Qué es el Patrón Singleton? (Español)
El **Patrón Singleton** es un patrón creacional que garantiza que una clase tenga una única instancia y proporciona un punto de acceso global a ella.

🔹 **Objetivo**: Evitar la creación de múltiples instancias de la misma clase y proporcionar una única instancia compartida.

🔹 **Principales ventajas:**
- **Evita múltiples instancias de la misma clase**.
- **Proporciona un punto de acceso global a la instancia**.
- **Mejora la eficiencia en el uso de recursos compartidos**.

---

## 📌 O que é o Padrão Singleton? (Português)
O **Padrão Singleton** é um padrão criacional que garante que uma classe tenha apenas uma instância e fornece um ponto de acesso global a ela.

🔹 **Objetivo**: Evitar a criação de várias instâncias da mesma classe e fornecer uma única instância compartilhada.

🔹 **Principais vantagens:**
- **Evita a criação de múltiplas instâncias da mesma classe**.
- **Fornece um ponto de acesso global à instância**.
- **Melhora a eficiência no uso de recursos compartilhados**.

---

## 🛠️ Implementazione / Implementation / Implementación / Implementação

### ✅ **Implementazione del Singleton / Singleton Implementation / Implementación del Singleton / Implementação do Singleton**
```python
class Singleton:
    _instance = None

    def __new__(cls):
        if cls._instance is None:
            cls._instance = super(Singleton, cls).__new__(cls)
        return cls._instance
```

### ✅ **Utilizzo del Singleton / Using the Singleton / Uso del Singleton / Uso do Singleton**
```python
singleton1 = Singleton()
singleton2 = Singleton()
print(singleton1 is singleton2)  # Output: True
```

---

## 🚀 **Conclusione / Conclusion / Conclusión / Conclusão**
Se hai bisogno di **garantire che una classe abbia una sola istanza**, il **Singleton Pattern** è la soluzione ideale! 💡

✅ **Evita la creazione di istanze duplicate / Prevents duplicate instance creation / Evita la creación de instancias duplicadas / Evita a criação de instâncias duplicadas**
✅ **Fornisce un punto di accesso centralizzato / Provides a centralized access point / Proporciona un punto de acceso centralizado / Fornece um ponto de acesso centralizado**
✅ **Migliora la gestione delle risorse globali / Improves global resource management / Mejora la gestión de recursos globales / Melhora a gestão de recursos globais**

---

### 📖 **Risorse Utili / Useful Resources / Recursos útiles / Recursos úteis**
- [Design Patterns - Singleton](https://refactoring.guru/design-patterns/singleton)

