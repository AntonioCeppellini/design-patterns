from abc import ABC, abstractmethod

# Implementor
class Renderer(ABC):
    @abstractmethod
    def render_shape(self, shape: str):
        pass

# Concrete Implementors
class RasterRenderer(Renderer):
    def render_shape(self, shape: str):
        return f"Rendering {shape} as pixels"

class VectorRenderer(Renderer):
    def render_shape(self, shape: str):
        return f"Rendering {shape} as vectors"

# Abstraction
class Shape(ABC):
    def __init__(self, renderer: Renderer):
        self.renderer = renderer

    @abstractmethod
    def draw(self):
        pass

# Refined Abstraction
class Circle(Shape):
    def draw(self):
        return self.renderer.render_shape("Circle")

# Usage
vector_circle = Circle(VectorRenderer())
raster_circle = Circle(RasterRenderer())

print(vector_circle.draw())  # Output: Rendering Circle as vectors
print(raster_circle.draw())  # Output: Rendering Circle as pixels
