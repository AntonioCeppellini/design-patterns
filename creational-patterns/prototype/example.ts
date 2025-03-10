class Prototype {
    clone(): this {
        return Object.assign(Object.create(Object.getPrototypeOf(this)), this);
    }
}

class Car extends Prototype {
    constructor(
        public brand: string,
        public engine: string,
        public color: string
    ) {
        super();
    }

    toString(): string {
        return `Car(brand=${this.brand}, engine=${this.engine}, color=${this.color})`;
    }
}

// Usage
const car1 = new Car("Tesla", "Electric", "Red");
const car2 = car1.clone();
console.log(car1.toString());  // Output: Car(brand=Tesla, engine=Electric, color=Red)
console.log(car2.toString());  // Output: Car(brand=Tesla, engine=Electric, color=Red)
