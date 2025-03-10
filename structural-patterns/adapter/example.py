class OldPrinter:
    def print_text(self, text):
        return f"Printing: {text}"

class NewPrinter:
    def new_print(self, text):
        return f"New Printer: {text}"

# Adapter
class PrinterAdapter:
    def __init__(self, new_printer):
        self.new_printer = new_printer

    def print_text(self, text):
        return self.new_printer.new_print(text)

# Usage
old_printer = OldPrinter()
new_printer = PrinterAdapter(NewPrinter())

print(old_printer.print_text("Hello"))  # Output: Printing: Hello
print(new_printer.print_text("Hello"))  # Output: New Printer: Hello
