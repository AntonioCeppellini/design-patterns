#include <iostream>
#include <memory>

// Abstract Expression
class Expression {
public:
    virtual int interpret() const = 0;
    virtual ~Expression() = default;
};

// Terminal Expression
class Number : public Expression {
private:
    int value;
public:
    Number(int v) : value(v) {}
    int interpret() const override {
        return value;
    }
};

// Non-Terminal Expression
class Add : public Expression {
private:
    std::shared_ptr<Expression> left, right;
public:
    Add(std::shared_ptr<Expression> l, std::shared_ptr<Expression> r) : left(l), right(r) {}
    int interpret() const override {
        return left->interpret() + right->interpret();
    }
};

// Usage
int main() {
    std::shared_ptr<Expression> expr = std::make_shared<Add>(
        std::make_shared<Number>(5),
        std::make_shared<Number>(10)
    );
    std::cout << expr->interpret() << std::endl; // Output: 15
    return 0;
}
