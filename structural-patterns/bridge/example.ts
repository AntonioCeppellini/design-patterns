// Implementor
interface Renderer {
    renderShape(shape: string): string;
}

// Concrete Implementors
class RasterRenderer implements Renderer {
    renderShape(shape: string): string {
        return `Rendering ${shape} as pixels`;
    }
}

class VectorRenderer implements Renderer {
    renderShape(shape: string): string {
        return `Rendering ${shape} as vectors`;
    }
}

// Abstraction
abstract class Shape {
    constructor(protected renderer: Renderer) {}
    abstract draw(): string;
}

// Refined Abstraction
class Circle extends Shape {
    draw(): string {
        return this.renderer.renderShape("Circle");
    }
}

// Usage
const vectorCircle = new Circle(new VectorRenderer());
const rasterCircle = new Circle(new RasterRenderer());

console.log(vectorCircle.draw()); // Output: Rendering Circle as vectors
console.log(rasterCircle.draw()); // Output: Rendering Circle as pixels
