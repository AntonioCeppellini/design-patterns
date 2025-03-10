class Car:
    def __init__(self, brand, engine, color):
        self.brand = brand
        self.engine = engine
        self.color = color

    def __str__(self):
        return f"Car(brand={self.brand}, engine={self.engine}, color={self.color})"

class CarBuilder:
    def __init__(self):
        self.brand = None
        self.engine = None
        self.color = None
    
    def set_brand(self, brand):
        self.brand = brand
        return self
    
    def set_engine(self, engine):
        self.engine = engine
        return self
    
    def set_color(self, color):
        self.color = color
        return self
    
    def build(self):
        return Car(self.brand, self.engine, self.color)

# Usage
car = CarBuilder().set_brand("Tesla").set_engine("Electric").set_color("Red").build()
print(car)  # Output: Car(brand=Tesla, engine=Electric, color=Red)
