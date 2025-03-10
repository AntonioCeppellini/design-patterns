// Abstract Expression
interface Expression {
    interpret(context: Record<string, number>): number;
}

// Terminal Expression
class NumberExpression implements Expression {
    constructor(private value: number) {}
    interpret(): number {
        return this.value;
    }
}

// Non-Terminal Expression
class AddExpression implements Expression {
    constructor(private left: Expression, private right: Expression) {}
    interpret(): number {
        return this.left.interpret({}) + this.right.interpret({});
    }
}

// Usage
const expr: Expression = new AddExpression(new NumberExpression(5), new NumberExpression(10));
console.log(expr.interpret({})); // Output: 15
