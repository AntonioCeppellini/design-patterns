class Car {
    constructor(
        public brand: string,
        public engine: string,
        public color: string
    ) {}

    toString(): string {
        return `Car(brand=${this.brand}, engine=${this.engine}, color=${this.color})`;
    }
}

class CarBuilder {
    private brand!: string;
    private engine!: string;
    private color!: string;

    setBrand(brand: string): this {
        this.brand = brand;
        return this;
    }

    setEngine(engine: string): this {
        this.engine = engine;
        return this;
    }

    setColor(color: string): this {
        this.color = color;
        return this;
    }

    build(): Car {
        return new Car(this.brand, this.engine, this.color);
    }
}

// Usage
const car = new CarBuilder().setBrand("Tesla").setEngine("Electric").setColor("Red").build();
console.log(car.toString()); // Output: Car(brand=Tesla, engine=Electric, color=Red)
