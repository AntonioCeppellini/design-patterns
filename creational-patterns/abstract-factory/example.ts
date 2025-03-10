// abstract
interface Chair {
    sit(): string;
}

interface Table {
    use(): string;
}

// concrete products
class ModernChair implements Chair {
    sit(): string {
        return "Sitting on a modern chair.";
    }
}

class VictorianChair implements Chair {
    sit(): string {
        return "Sitting on a victorian chair.";
    }
}

class ModernTable implements Table {
    use(): string {
        return "Using a modern table.";
    }
}

class VictorianTable implements Table {
    use(): string {
        return "Using a victorian table.";
    }
}

// abstract factory
interface FurnitureFactory {
    createChair(): Chair;
    createTable(): Table;
}

// concrete factories
class ModernFurnitureFactory implements FurnitureFactory {
    createChair(): Chair {
        return new ModernChair();
    }
    createTable(): Table {
        return new ModernTable();
    }
}

class VictorianFurnitureFactory implements FurnitureFactory {
    createChair(): Chair {
        return new VictorianChair();
    }
    createTable(): Table {
        return new VictorianTable();
    }
}

// Usage
const factory: FurnitureFactory = new ModernFurnitureFactory();
const chair = factory.createChair();
const table = factory.createTable();
console.log(chair.sit());  // output: sitting on a modern chair.
console.log(table.use());  // output: using a modern table.
