# Command Pattern

## 📌 Cos'è il Command Pattern? (Italiano)
Il **Command Pattern** è un pattern comportamentale che trasforma una richiesta in un oggetto autonomo, permettendo di parametrizzare i client con operazioni, accodare richieste o annullarle.

🔹 **Obiettivo**: Incapsulare una richiesta in un oggetto separato per consentire operazioni come annullamento, registrazione o accodamento.

🔹 **Principali vantaggi:**
- **Separa il mittente e il ricevitore della richiesta**.
- **Permette l'implementazione di operazioni annullabili (undo)**.
- **Facilita la registrazione e accodamento delle richieste**.

---

## 📌 What is the Command Pattern? (English)
The **Command Pattern** is a behavioral pattern that turns a request into a stand-alone object, allowing clients to parameterize operations, queue requests, or undo actions.

🔹 **Objective**: Encapsulate a request into a separate object to enable operations like undoing, queuing, or logging requests.

🔹 **Main advantages:**
- **Decouples the sender and receiver of a request**.
- **Allows implementation of undoable operations**.
- **Facilitates request logging and queuing**.

---

## 📌 ¿Qué es el Patrón Command? (Español)
El **Patrón Command** es un patrón de comportamiento que convierte una solicitud en un objeto independiente, permitiendo parametrizar clientes con operaciones, encolar solicitudes o deshacer acciones.

🔹 **Objetivo**: Encapsular una solicitud en un objeto separado para permitir operaciones como deshacer, registrar o encolar solicitudes.

🔹 **Principales ventajas:**
- **Separa el remitente y el receptor de la solicitud**.
- **Permite la implementación de operaciones reversibles (undo)**.
- **Facilita el registro y encolamiento de solicitudes**.

---

## 📌 O que é o Padrão Command? (Português)
O **Padrão Command** é um padrão comportamental que transforma uma solicitação em um objeto independente, permitindo parametrizar clientes com operações, enfileirar solicitações ou desfazer ações.

🔹 **Objetivo**: Encapsular uma solicitação em um objeto separado para permitir operações como desfazer, registrar ou enfileirar solicitações.

🔹 **Principais vantagens:**
- **Separa o remetente e o receptor da solicitação**.
- **Permite a implementação de operações reversíveis (undo)**.
- **Facilita o registro e enfileiramento de solicitações**.

---

## 🛠️ Implementazione / Implementation / Implementación / Implementação

### ✅ **Definizione del Comando / Defining the Command / Definición del Comando / Definição do Comando**
```python
from abc import ABC, abstractmethod

class Command(ABC):
    @abstractmethod
    def execute(self):
        pass

    def undo(self):
        pass
```

### ✅ **Implementazioni Concrete / Concrete Implementations / Implementaciones Concretas / Implementações Concretas**
```python
class Light:
    def turn_on(self):
        return "Light is ON"
    
    def turn_off(self):
        return "Light is OFF"

class LightOnCommand(Command):
    def __init__(self, light: Light):
        self.light = light
    
    def execute(self):
        return self.light.turn_on()
    
    def undo(self):
        return self.light.turn_off()

class LightOffCommand(Command):
    def __init__(self, light: Light):
        self.light = light
    
    def execute(self):
        return self.light.turn_off()
    
    def undo(self):
        return self.light.turn_on()
```

### ✅ **Definizione dell'Invoker / Defining the Invoker / Definición del Invocador / Definição do Invocador**
```python
class RemoteControl:
    def __init__(self):
        self.history = []
    
    def execute_command(self, command: Command):
        self.history.append(command)
        return command.execute()
    
    def undo_last(self):
        if self.history:
            return self.history.pop().undo()
        return "Nothing to undo"
```

### ✅ **Utilizzo del Command Pattern / Using the Command Pattern / Uso del Patrón Command / Uso do Padrão Command**
```python
light = Light()
light_on = LightOnCommand(light)
light_off = LightOffCommand(light)

remote = RemoteControl()
print(remote.execute_command(light_on))  # Output: Light is ON
print(remote.undo_last())  # Output: Light is OFF
```

---

## 🚀 **Conclusione / Conclusion / Conclusión / Conclusão**
Se hai bisogno di **separare un'azione dal suo esecutore e permettere operazioni annullabili**, il **Command Pattern** è la soluzione ideale! 💡

✅ **Permette il disaccoppiamento tra invocatore e ricevitore / Enables decoupling between invoker and receiver / Permite desacoplar el invocador y el receptor / Permite o desacoplamento entre invocador e receptor**
✅ **Supporta operazioni annullabili e riutilizzabili / Supports undoable and reusable operations / Soporta operaciones reversibles y reutilizables / Suporta operações reversíveis e reutilizáveis**
✅ **Facilita la registrazione e gestione delle richieste / Facilitates request logging and handling / Facilita el registro y manejo de solicitudes / Facilita o registro e gerenciamento de solicitações**

---

### 📖 **Risorse Utili / Useful Resources / Recursos útiles / Recursos úteis**
- [Design Patterns - Command](https://refactoring.guru/design-patterns/command)
