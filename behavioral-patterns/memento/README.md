# Memento Pattern

## 📌 Cos'è il Memento Pattern? (Italiano)
Il **Memento Pattern** è un pattern comportamentale che permette di salvare e ripristinare lo stato di un oggetto senza violarne l'incapsulamento.

🔹 **Obiettivo**: Fornire un meccanismo per il salvataggio e il ripristino dello stato di un oggetto.

🔹 **Principali vantaggi:**
- **Permette di implementare funzionalità di annullamento (undo/redo)**.
- **Migliora la gestione dello stato degli oggetti senza esporre i dettagli interni**.
- **Separa la logica di gestione dello stato dal resto dell'applicazione**.

---

## 📌 What is the Memento Pattern? (English)
The **Memento Pattern** is a behavioral pattern that allows saving and restoring an object's state without violating encapsulation.

🔹 **Objective**: Provide a mechanism for saving and restoring an object's state.

🔹 **Main advantages:**
- **Enables undo/redo functionality**.
- **Improves state management without exposing internal details**.
- **Separates state management logic from the rest of the application**.

---

## 📌 ¿Qué es el Patrón Memento? (Español)
El **Patrón Memento** es un patrón de comportamiento que permite guardar y restaurar el estado de un objeto sin violar su encapsulación.

🔹 **Objetivo**: Proporcionar un mecanismo para guardar y restaurar el estado de un objeto.

🔹 **Principales ventajas:**
- **Permite implementar funcionalidades de deshacer/rehacer (undo/redo)**.
- **Mejora la gestión del estado de los objetos sin exponer detalles internos**.
- **Separa la lógica de gestión del estado del resto de la aplicación**.

---

## 📌 O que é o Padrão Memento? (Português)
O **Padrão Memento** é um padrão comportamental que permite salvar e restaurar o estado de um objeto sem violar seu encapsulamento.

🔹 **Objetivo**: Fornecer um mecanismo para salvar e restaurar o estado de um objeto.

🔹 **Principais vantagens:**
- **Permite implementar funcionalidades de desfazer/refazer (undo/redo)**.
- **Melhora a gestão do estado dos objetos sem expor detalhes internos**.
- **Separa a lógica de gestão do estado do restante da aplicação**.

---

## 🛠️ Implementazione / Implementation / Implementación / Implementação

### ✅ **Definizione del Memento / Defining the Memento / Definición del Memento / Definição do Memento**
```python
class Memento:
    def __init__(self, state):
        self._state = state
    
    def get_state(self):
        return self._state
```

### ✅ **Definizione dell'Originator / Defining the Originator / Definición del Originador / Definição do Originador**
```python
class Originator:
    def __init__(self, state):
        self._state = state
    
    def save_to_memento(self):
        return Memento(self._state)
    
    def restore_from_memento(self, memento):
        self._state = memento.get_state()
    
    def set_state(self, state):
        self._state = state
    
    def get_state(self):
        return self._state
```

### ✅ **Definizione del Caretaker / Defining the Caretaker / Definición del Guardián / Definição do Guardião**
```python
class Caretaker:
    def __init__(self):
        self._mementos = []
    
    def add_memento(self, memento):
        self._mementos.append(memento)
    
    def get_memento(self, index):
        return self._mementos[index]
```

### ✅ **Utilizzo del Memento Pattern / Using the Memento Pattern / Uso del Patrón Memento / Uso do Padrão Memento**
```python
originator = Originator("State1")
caretaker = Caretaker()

# Salvataggio dello stato iniziale
caretaker.add_memento(originator.save_to_memento())

# Cambio dello stato
originator.set_state("State2")

# Ripristino dello stato precedente
originator.restore_from_memento(caretaker.get_memento(0))
print(originator.get_state())  # Output: State1
```

---

## 🚀 **Conclusione / Conclusion / Conclusión / Conclusão**
Se hai bisogno di **salvare e ripristinare lo stato di un oggetto senza violare l'incapsulamento**, il **Memento Pattern** è la soluzione ideale! 💡

✅ **Permette di implementare undo/redo / Enables undo/redo functionality / Permite implementar deshacer/rehacer / Permite implementar desfazer/refazer**
✅ **Protegge l'integrità dello stato degli oggetti / Protects object state integrity / Protege la integridad del estado de los objetos / Protege a integridade do estado dos objetos**
✅ **Separa la gestione dello stato dalla logica applicativa / Separates state management from application logic / Separa la gestión del estado de la lógica de la aplicación / Separa a gestão do estado da lógica da aplicação**

---

### 📖 **Risorse Utili / Useful Resources / Recursos útiles / Recursos úteis**
- [Design Patterns - Memento](https://refactoring.guru/design-patterns/memento)

