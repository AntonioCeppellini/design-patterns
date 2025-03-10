# Adapter Pattern

## 📌 Cos'è l'Adapter Pattern? (Italiano)
L'**Adapter Pattern** è un pattern strutturale che permette a interfacce incompatibili di lavorare insieme, fungendo da ponte tra loro.

🔹 **Obiettivo**: Consentire l'interazione tra classi con interfacce diverse senza modificarne il codice.

🔹 **Principali vantaggi:**
- **Permette l'integrazione di codice legacy con nuovo codice**.
- **Favorisce la riusabilità senza modificare il codice esistente**.
- **Separa le interfacce senza alterarne il comportamento**.

---

## 📌 What is the Adapter Pattern? (English)
The **Adapter Pattern** is a structural pattern that allows incompatible interfaces to work together by acting as a bridge between them.

🔹 **Objective**: Enable interaction between classes with different interfaces without modifying their code.

🔹 **Main advantages:**
- **Allows legacy code to integrate with new code**.
- **Promotes reusability without modifying existing code**.
- **Separates interfaces without altering their behavior**.

---

## 📌 ¿Qué es el Patrón Adapter? (Español)
El **Patrón Adapter** es un patrón estructural que permite que interfaces incompatibles trabajen juntas, actuando como un puente entre ellas.

🔹 **Objetivo**: Habilitar la interacción entre clases con diferentes interfaces sin modificar su código.

🔹 **Principales ventajas:**
- **Permite integrar código heredado con código nuevo**.
- **Fomenta la reutilización sin modificar el código existente**.
- **Separa las interfaces sin alterar su comportamiento**.

---

## 📌 O que é o Padrão Adapter? (Português)
O **Padrão Adapter** é um padrão estrutural que permite que interfaces incompatíveis trabalhem juntas, atuando como uma ponte entre elas.

🔹 **Objetivo**: Permitir a interação entre classes com diferentes interfaces sem modificar seu código.

🔹 **Principais vantagens:**
- **Permite a integração de código legado com código novo**.
- **Promove a reutilização sem modificar o código existente**.
- **Separa interfaces sem alterar seu comportamento**.

---

## 🛠️ Implementazione / Implementation / Implementación / Implementação

### ✅ **Definizione dell'Adapter / Defining the Adapter / Definición del Adapter / Definição do Adapter**
```python
class Target:
    def request(self):
        return "Target request"
```

### ✅ **Classe da adattare / Adaptee Class / Clase a adaptar / Classe a adaptar**
```python
class Adaptee:
    def specific_request(self):
        return "Specific request from Adaptee"
```

### ✅ **Implementazione dell'Adapter / Adapter Implementation / Implementación del Adapter / Implementação do Adapter**
```python
class Adapter(Target):
    def __init__(self, adaptee: Adaptee):
        self.adaptee = adaptee
    
    def request(self):
        return self.adaptee.specific_request()
```

### ✅ **Utilizzo dell'Adapter / Using the Adapter / Uso del Adapter / Uso do Adapter**
```python
adaptee = Adaptee()
adapter = Adapter(adaptee)
print(adapter.request())  # Output: Specific request from Adaptee
```

---

## 🚀 **Conclusione / Conclusion / Conclusión / Conclusão**
Se hai bisogno di **far comunicare classi con interfacce incompatibili**, l'**Adapter Pattern** è la soluzione ideale! 💡

✅ **Consente l'integrazione di codice esistente / Enables integration of existing code / Permite la integración de código existente / Permite a integração de código existente**
✅ **Migliora la riusabilità del codice senza modificarlo / Improves code reusability without modification / Mejora la reutilización del código sin modificarlo / Melhora a reutilização do código sem modificá-lo**
✅ **Funge da ponte tra interfacce diverse / Acts as a bridge between different interfaces / Actúa como puente entre diferentes interfaces / Atua como ponte entre diferentes interfaces**

---

### 📖 **Risorse Utili / Useful Resources / Recursos útiles / Recursos úteis**
- [Design Patterns - Adapter](https://refactoring.guru/design-patterns/adapter)
