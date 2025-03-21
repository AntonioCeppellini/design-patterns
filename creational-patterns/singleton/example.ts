class Singleton {
    private static instance: Singleton;

    private constructor() {}

    static getInstance(): Singleton {
        if (!Singleton.instance) {
            Singleton.instance = new Singleton();
        }
        return Singleton.instance;
    }
}

// Usage
const s1 = Singleton.getInstance();
const s2 = Singleton.getInstance();
console.log(s1 === s2);  // Output: true
