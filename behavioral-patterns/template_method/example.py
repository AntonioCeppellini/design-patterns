# Abstract Class
class AbstractClass:
    def template_method(self):
        self.step1()
        self.step2()
        self.hook()

    def step1(self):
        print("Step 1: Common behavior")
    
    def step2(self):
        raise NotImplementedError("Subclass must implement step2")
    
    def hook(self):
        pass  # Optional method

# Concrete Class A
class ConcreteClassA(AbstractClass):
    def step2(self):
        print("Step 2: ConcreteClassA implementation")

# Concrete Class B
class ConcreteClassB(AbstractClass):
    def step2(self):
        print("Step 2: ConcreteClassB implementation")
    
    def hook(self):
        print("Hook: ConcreteClassB additional behavior")

# Usage
objA = ConcreteClassA()
objA.template_method()

objB = ConcreteClassB()
objB.template_method()
