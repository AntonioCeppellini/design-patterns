# State Interface
class State:
    def handle(self):
        pass

# Concrete States
class StateA(State):
    def handle(self):
        print("Handling State A")

class StateB(State):
    def handle(self):
        print("Handling State B")

# Context
class Context:
    def __init__(self, state: State):
        self._state = state
    
    def set_state(self, state: State):
        self._state = state
    
    def request(self):
        self._state.handle()

# Usage
context = Context(StateA())
context.request()  # Output: Handling State A

context.set_state(StateB())
context.request()  # Output: Handling State B
