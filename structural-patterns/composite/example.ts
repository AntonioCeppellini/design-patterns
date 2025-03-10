// Component
interface Graphic {
    draw(): string;
}

// Leaf
class Circle implements Graphic {
    draw(): string {
        return "Drawing a Circle";
    }
}

// Composite
class CompositeGraphic implements Graphic {
    private children: Graphic[] = [];

    add(graphic: Graphic): void {
        this.children.push(graphic);
    }

    draw(): string {
        return this.children.map(child => child.draw()).join("\n");
    }
}

// Usage
const circle1 = new Circle();
const circle2 = new Circle();
const group = new CompositeGraphic();
group.add(circle1);
group.add(circle2);
console.log(group.draw());
// Output:
// Drawing a Circle
// Drawing a Circle
