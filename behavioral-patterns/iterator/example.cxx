#include <iostream>
#include <vector>
#include <memory>

// Iterator Interface
class Iterator {
public:
    virtual bool hasNext() const = 0;
    virtual int next() = 0;
    virtual ~Iterator() = default;
};

// Concrete Iterator
class NumberIterator : public Iterator {
private:
    std::vector<int> numbers;
    size_t index = 0;
public:
    NumberIterator(const std::vector<int>& nums) : numbers(nums) {}

    bool hasNext() const override {
        return index < numbers.size();
    }

    int next() override {
        return hasNext() ? numbers[index++] : -1;
    }
};

// Concrete Collection
class NumberCollection {
private:
    std::vector<int> numbers;
public:
    NumberCollection(std::vector<int> nums) : numbers(std::move(nums)) {}
    std::unique_ptr<Iterator> getIterator() const {
        return std::make_unique<NumberIterator>(numbers);
    }
};

// Usage
int main() {
    NumberCollection collection({1, 2, 3, 4, 5});
    auto iterator = collection.getIterator();
    while (iterator->hasNext()) {
        std::cout << iterator->next() << " "; // Output: 1 2 3 4 5
    }
    std::cout << std::endl;
    return 0;
}
