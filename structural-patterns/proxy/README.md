# Proxy Pattern

## 📌 Cos'è il Proxy Pattern? (Italiano)
Il **Proxy Pattern** è un pattern strutturale che fornisce un sostituto o un'interfaccia di controllo per accedere a un oggetto, proteggendolo o ottimizzandone l'uso.

🔹 **Obiettivo**: Controllare l'accesso a un oggetto aggiungendo un livello intermedio.

🔹 **Principali vantaggi:**
- **Aggiunge un livello di sicurezza e controllo**.
- **Permette la gestione di risorse pesanti con lazy loading**.
- **Migliora l'incapsulamento e la protezione dell'oggetto reale**.

---

## 📌 What is the Proxy Pattern? (English)
The **Proxy Pattern** is a structural pattern that provides a substitute or control interface to access an object, protecting or optimizing its usage.

🔹 **Objective**: Control access to an object by adding an intermediate layer.

🔹 **Main advantages:**
- **Adds a layer of security and control**.
- **Enables managing heavy resources with lazy loading**.
- **Improves encapsulation and protection of the real object**.

---

## 📌 ¿Qué es el Patrón Proxy? (Español)
El **Patrón Proxy** es un patrón estructural que proporciona un sustituto o una interfaz de control para acceder a un objeto, protegiéndolo u optimizando su uso.

🔹 **Objetivo**: Controlar el acceso a un objeto agregando una capa intermedia.

🔹 **Principales ventajas:**
- **Añade una capa de seguridad y control**.
- **Permite la gestión de recursos pesados con carga diferida (lazy loading)**.
- **Mejora el encapsulamiento y la protección del objeto real**.

---

## 📌 O que é o Padrão Proxy? (Português)
O **Padrão Proxy** é um padrão estrutural que fornece um substituto ou uma interface de controle para acessar um objeto, protegendo-o ou otimizando seu uso.

🔹 **Objetivo**: Controlar o acesso a um objeto adicionando uma camada intermediária.

🔹 **Principais vantagens:**
- **Adiciona uma camada de segurança e controle**.
- **Permite gerenciar recursos pesados com carregamento preguiçoso (lazy loading)**.
- **Melhora o encapsulamento e a proteção do objeto real**.

---

## 🛠️ Implementazione / Implementation / Implementación / Implementação

### ✅ **Definizione del Soggetto Reale / Defining the Real Subject / Definición del Sujeto Real / Definição do Sujeito Real**
```python
from abc import ABC, abstractmethod

class Subject(ABC):
    @abstractmethod
    def request(self):
        pass

class RealSubject(Subject):
    def request(self):
        return "RealSubject: Handling request"
```

### ✅ **Definizione del Proxy / Defining the Proxy / Definición del Proxy / Definição do Proxy**
```python
class Proxy(Subject):
    def __init__(self, real_subject: RealSubject):
        self._real_subject = real_subject
    
    def request(self):
        if self._check_access():
            return self._real_subject.request()
        return "Proxy: Access Denied"
    
    def _check_access(self):
        return True  # Simulazione di controllo di accesso
```

### ✅ **Utilizzo del Proxy / Using the Proxy / Uso del Proxy / Uso do Proxy**
```python
real_subject = RealSubject()
proxy = Proxy(real_subject)
print(proxy.request())  # Output: RealSubject: Handling request
```

---

## 🚀 **Conclusione / Conclusion / Conclusión / Conclusão**
Se hai bisogno di **controllare l'accesso a un oggetto o ottimizzarne l'uso**, il **Proxy Pattern** è la soluzione ideale! 💡

✅ **Aggiunge un livello di sicurezza e controllo / Adds a layer of security and control / Agrega una capa de seguridad y control / Adiciona uma camada de segurança e controle**
✅ **Permette la gestione di risorse costose in modo efficiente / Enables efficient management of expensive resources / Permite la gestión eficiente de recursos costosos / Permite o gerenciamento eficiente de recursos caros**
✅ **Migliora l'incapsulamento e la protezione dell'oggetto reale / Improves encapsulation and real object protection / Mejora el encapsulamiento y la protección del objeto real / Melhora o encapsulamento e a proteção do objeto real**

---

### 📖 **Risorse Utili / Useful Resources / Recursos útiles / Recursos úteis**
- [Design Patterns - Proxy](https://refactoring.guru/design-patterns/proxy)
