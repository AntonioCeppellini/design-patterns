#include <iostream>
#include <string>

class OldPrinter {
public:
    std::string printText(const std::string& text) {
        return "Printing: " + text;
    }
};

class NewPrinter {
public:
    std::string newPrint(const std::string& text) {
        return "New Printer: " + text;
    }
};

// Adapter
class PrinterAdapter {
private:
    NewPrinter newPrinter;
public:
    std::string printText(const std::string& text) {
        return newPrinter.newPrint(text);
    }
};

// Usage
int main() {
    OldPrinter oldPrinter;
    PrinterAdapter newPrinter;

    std::cout << oldPrinter.printText("Hello") << std::endl;  // Output: Printing: Hello
    std::cout << newPrinter.printText("Hello") << std::endl;  // Output: New Printer: Hello
    return 0;
}
