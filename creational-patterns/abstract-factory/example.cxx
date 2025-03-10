#include <iostream>
#include <memory>

// abstract
class Chair {
public:
    virtual std::string sit() const = 0;
    virtual ~Chair() = default;
};

class Table {
public:
    virtual std::string use() const = 0;
    virtual ~Table() = default;
};

// concrete
class ModernChair : public Chair {
public:
    std::string sit() const override { return "Sitting on a modern chair."; }
};

class VictorianChair : public Chair {
public:
    std::string sit() const override { return "Sitting on a victorian chair."; }
};

class ModernTable : public Table {
public:
    std::string use() const override { return "Using a modern table."; }
};

class VictorianTable : public Table {
public:
    std::string use() const override { return "Using a victorian table."; }
};

// abstract factory
class FurnitureFactory {
public:
    virtual std::unique_ptr<Chair> createChair() const = 0;
    virtual std::unique_ptr<Table> createTable() const = 0;
    virtual ~FurnitureFactory() = default;
};

// concrete factories
class ModernFurnitureFactory : public FurnitureFactory {
public:
    std::unique_ptr<Chair> createChair() const override {
        return std::make_unique<ModernChair>();
    }
    std::unique_ptr<Table> createTable() const override {
        return std::make_unique<ModernTable>();
    }
};

class VictorianFurnitureFactory : public FurnitureFactory {
public:
    std::unique_ptr<Chair> createChair() const override {
        return std::make_unique<VictorianChair>();
    }
    std::unique_ptr<Table> createTable() const override {
        return std::make_unique<VictorianTable>();
    }
};

// usage
int main() {
    ModernFurnitureFactory factory;
    auto chair = factory.createChair();
    auto table = factory.createTable();
    std::cout << chair->sit() << std::endl; // output: Sitting on a modern chair.
    std::cout << table->use() << std::endl; // output: Using a modern table.
    return 0;
}
