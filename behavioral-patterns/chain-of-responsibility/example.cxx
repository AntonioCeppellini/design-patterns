#include <iostream>
#include <memory>
#include <string>

// Handler
class Handler {
protected:
    std::shared_ptr<Handler> successor;
public:
    Handler(std::shared_ptr<Handler> next = nullptr) : successor(next) {}
    virtual std::string handleRequest(const std::string& request) = 0;
};

// Concrete Handlers
class LowLevelSupport : public Handler {
public:
    using Handler::Handler;
    std::string handleRequest(const std::string& request) override {
        if (request == "low") return "LowLevelSupport: Handling request";
        return successor ? successor->handleRequest(request) : "No handler found";
    }
};

class MidLevelSupport : public Handler {
public:
    using Handler::Handler;
    std::string handleRequest(const std::string& request) override {
        if (request == "mid") return "MidLevelSupport: Handling request";
        return successor ? successor->handleRequest(request) : "No handler found";
    }
};

class HighLevelSupport : public Handler {
public:
    using Handler::Handler;
    std::string handleRequest(const std::string& request) override {
        if (request == "high") return "HighLevelSupport: Handling request";
        return successor ? successor->handleRequest(request) : "No handler found";
    }
};

// Setup Chain
int main() {
    auto chain = std::make_shared<LowLevelSupport>(
        std::make_shared<MidLevelSupport>(
            std::make_shared<HighLevelSupport>()
        )
    );
    std::cout << chain->handleRequest("mid") << std::endl; // Output: MidLevelSupport: Handling request
    std::cout << chain->handleRequest("high") << std::endl; // Output: HighLevelSupport: Handling request
    std::cout << chain->handleRequest("unknown") << std::endl; // Output: No handler found
    return 0;
}
