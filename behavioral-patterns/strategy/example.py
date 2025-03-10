# Strategy Interface
class Strategy:
    def execute(self):
        pass

# Concrete Strategies
class StrategyA(Strategy):
    def execute(self):
        print("Executing Strategy A")

class StrategyB(Strategy):
    def execute(self):
        print("Executing Strategy B")

# Context
class Context:
    def __init__(self, strategy: Strategy):
        self._strategy = strategy
    
    def set_strategy(self, strategy: Strategy):
        self._strategy = strategy
    
    def execute_strategy(self):
        self._strategy.execute()

# Usage
context = Context(StrategyA())
context.execute_strategy()  # Output: Executing Strategy A

context.set_strategy(StrategyB())
context.execute_strategy()  # Output: Executing Strategy B
