# Memento
class Memento:
    def __init__(self, state):
        self._state = state
    
    def get_state(self):
        return self._state

# Originator
class Editor:
    def __init__(self, text=""):
        self._text = text
    
    def write(self, text):
        self._text = text
    
    def save(self):
        return Memento(self._text)
    
    def restore(self, memento):
        self._text = memento.get_state()
    
    def __str__(self):
        return self._text

# Caretaker
class History:
    def __init__(self):
        self._mementos = []
    
    def save(self, memento):
        self._mementos.append(memento)
    
    def undo(self):
        if self._mementos:
            return self._mementos.pop()
        return None

# Usage
editor = Editor()
history = History()

editor.write("Hello, World!")
history.save(editor.save())

editor.write("New Text")
print(editor)  # Output: New Text

editor.restore(history.undo())
print(editor)  # Output: Hello, World!
