// Memento
class Memento {
    constructor(private state: string) {}
    getState(): string {
        return this.state;
    }
}

// Originator
class Editor {
    private text: string = "";
    write(text: string): void {
        this.text = text;
    }
    save(): Memento {
        return new Memento(this.text);
    }
    restore(memento: Memento): void {
        this.text = memento.getState();
    }
    toString(): string {
        return this.text;
    }
}

// Caretaker
class History {
    private mementos: Memento[] = [];
    save(memento: Memento): void {
        this.mementos.push(memento);
    }
    undo(): Memento | null {
        return this.mementos.pop() || null;
    }
}

// Usage
const editor = new Editor();
const history = new History();

editor.write("Hello, World!");
history.save(editor.save());

editor.write("New Text");
console.log(editor.toString()); // Output: New Text

editor.restore(history.undo()!);
console.log(editor.toString()); // Output: Hello, World!
