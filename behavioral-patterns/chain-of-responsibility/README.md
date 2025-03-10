# Chain of Responsibility Pattern

## 📌 Cos'è il Chain of Responsibility Pattern? (Italiano)
Il **Chain of Responsibility Pattern** è un pattern comportamentale che consente di passare una richiesta attraverso una catena di gestori fino a quando uno di essi non la gestisce.

🔹 **Obiettivo**: Separare il mittente della richiesta dal suo gestore, consentendo più livelli di elaborazione.

🔹 **Principali vantaggi:**
- **Riduce le dipendenze tra il mittente e i destinatari**.
- **Aggiunge flessibilità nella gestione delle richieste**.
- **Permette di modificare la catena senza alterare il codice del client**.

---

## 📌 What is the Chain of Responsibility Pattern? (English)
The **Chain of Responsibility Pattern** is a behavioral pattern that allows passing a request through a chain of handlers until one of them handles it.

🔹 **Objective**: Separate the request sender from its handler, allowing multiple levels of processing.

🔹 **Main advantages:**
- **Reduces dependencies between the sender and the receivers**.
- **Adds flexibility in request handling**.
- **Allows modifying the chain without altering client code**.

---

## 📌 ¿Qué es el Patrón Chain of Responsibility? (Español)
El **Patrón Chain of Responsibility** es un patrón de comportamiento que permite pasar una solicitud a través de una cadena de manejadores hasta que uno de ellos la maneje.

🔹 **Objetivo**: Separar el remitente de la solicitud de su manejador, permitiendo múltiples niveles de procesamiento.

🔹 **Principales ventajas:**
- **Reduce las dependencias entre el remitente y los destinatarios**.
- **Añade flexibilidad en el manejo de solicitudes**.
- **Permite modificar la cadena sin alterar el código del cliente**.

---

## 📌 O que é o Padrão Chain of Responsibility? (Português)
O **Padrão Chain of Responsibility** é um padrão comportamental que permite passar uma solicitação por uma cadeia de manipuladores até que um deles a processe.

🔹 **Objetivo**: Separar o remetente da solicitação do seu manipulador, permitindo múltiplos níveis de processamento.

🔹 **Principais vantagens:**
- **Reduz as dependências entre o remetente e os destinatários**.
- **Adiciona flexibilidade no tratamento de solicitações**.
- **Permite modificar a cadeia sem alterar o código do cliente**.

---

## 🛠️ Implementazione / Implementation / Implementación / Implementação

### ✅ **Definizione dell'Handler / Defining the Handler / Definición del Manejador / Definição do Manipulador**
```python
from abc import ABC, abstractmethod

class Handler(ABC):
    def __init__(self, next_handler=None):
        self._next_handler = next_handler
    
    @abstractmethod
    def handle(self, request):
        if self._next_handler:
            return self._next_handler.handle(request)
        return None
```

### ✅ **Implementazioni Concrete / Concrete Implementations / Implementaciones Concretas / Implementações Concretas**
```python
class ConcreteHandlerA(Handler):
    def handle(self, request):
        if request == "A":
            return "Handled by Handler A"
        return super().handle(request)

class ConcreteHandlerB(Handler):
    def handle(self, request):
        if request == "B":
            return "Handled by Handler B"
        return super().handle(request)
```

### ✅ **Utilizzo della Chain of Responsibility / Using the Chain of Responsibility / Uso de la Cadena de Responsabilidad / Uso da Cadeia de Responsabilidade**
```python
handler_chain = ConcreteHandlerA(ConcreteHandlerB())
print(handler_chain.handle("A"))  # Output: Handled by Handler A
print(handler_chain.handle("B"))  # Output: Handled by Handler B
print(handler_chain.handle("C"))  # Output: None
```

---

## 🚀 **Conclusione / Conclusion / Conclusión / Conclusão**
Se hai bisogno di **gestire richieste in modo flessibile senza accoppiare il client a un gestore specifico**, il **Chain of Responsibility Pattern** è la soluzione ideale! 💡

✅ **Separa il mittente dalla logica di gestione delle richieste / Separates sender from request handling logic / Separa el remitente de la lógica de manejo de solicitudes / Separa o remetente da lógica de manipulação de solicitações**
✅ **Permette di aggiungere o modificare i gestori facilmente / Allows easy addition or modification of handlers / Permite agregar o modificar manejadores fácilmente / Permite adicionar ou modificar manipuladores facilmente**
✅ **Evita un grande blocco `if-else` nel codice / Avoids large `if-else` blocks in code / Evita grandes bloques `if-else` en el código / Evita grandes blocos `if-else` no código**

---

### 📖 **Risorse Utili / Useful Resources / Recursos útiles / Recursos úteis**
- [Design Patterns - Chain of Responsibility](https://refactoring.guru/design-patterns/chain-of-responsibility)

