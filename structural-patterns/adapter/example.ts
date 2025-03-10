class OldPrinter {
    printText(text: string): string {
        return `Printing: ${text}`;
    }
}

class NewPrinter {
    newPrint(text: string): string {
        return `New Printer: ${text}`;
    }
}

// Adapter
class PrinterAdapter {
    constructor(private newPrinter: NewPrinter) {}
    printText(text: string): string {
        return this.newPrinter.newPrint(text);
    }
}

// Usage
const oldPrinter = new OldPrinter();
const newPrinter = new PrinterAdapter(new NewPrinter());

console.log(oldPrinter.printText("Hello")); // Output: Printing: Hello
console.log(newPrinter.printText("Hello")); // Output: New Printer: Hello
