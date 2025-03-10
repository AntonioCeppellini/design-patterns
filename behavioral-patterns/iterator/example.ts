// Iterator Interface
interface Iterator<T> {
    next(): T | null;
    hasNext(): boolean;
}

// Concrete Iterator
class NumberIterator implements Iterator<number> {
    private index = 0;

    constructor(private numbers: number[]) {}

    next(): number | null {
        return this.hasNext() ? this.numbers[this.index++] : null;
    }

    hasNext(): boolean {
        return this.index < this.numbers.length;
    }
}

// Concrete Collection
class NumberCollection {
    constructor(private numbers: number[]) {}
    getIterator(): Iterator<number> {
        return new NumberIterator(this.numbers);
    }
}

// Usage
const collection = new NumberCollection([1, 2, 3, 4, 5]);
const iterator = collection.getIterator();
while (iterator.hasNext()) {
    console.log(iterator.next()); // Output: 1 2 3 4 5
}
