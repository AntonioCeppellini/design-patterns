from abc import ABC, abstractmethod

# abstract
class Chair(ABC):
    @abstractmethod
    def sit(self):
        pass

class Table(ABC):
    @abstractmethod
    def use(self):
        pass

# concrete Products
class ModernChair(Chair):
    def sit(self):
        return "Sitting on a modern chair."

class VictorianChair(Chair):
    def sit(self):
        return "Sitting on a victorian chair."

class ModernTable(Table):
    def use(self):
        return "Using a modern table."

class VictorianTable(Table):
    def use(self):
        return "Using a victorian table."

# abstract factory
class FurnitureFactory(ABC):
    @abstractmethod
    def create_chair(self) -> Chair:
        pass
    
    @abstractmethod
    def create_table(self) -> Table:
        pass

# concrete factories
class ModernFurnitureFactory(FurnitureFactory):
    def create_chair(self) -> Chair:
        return ModernChair()
    
    def create_table(self) -> Table:
        return ModernTable()

class VictorianFurnitureFactory(FurnitureFactory):
    def create_chair(self) -> Chair:
        return VictorianChair()
    
    def create_table(self) -> Table:
        return VictorianTable()

# usage
factory = ModernFurnitureFactory()
chair = factory.create_chair()
table = factory.create_table()
print(chair.sit())  # output: Sitting on a modern chair.
print(table.use())  # output: Using a modern table.
