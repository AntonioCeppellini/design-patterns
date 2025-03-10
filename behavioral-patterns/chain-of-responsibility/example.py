from abc import ABC, abstractmethod

# Handler
class Handler(ABC):
    def __init__(self, successor=None):
        self.successor = successor
    
    @abstractmethod
    def handle_request(self, request):
        pass

# Concrete Handlers
class LowLevelSupport(Handler):
    def handle_request(self, request):
        if request == "low":
            return "LowLevelSupport: Handling request"
        elif self.successor:
            return self.successor.handle_request(request)
        return "No handler found"

class MidLevelSupport(Handler):
    def handle_request(self, request):
        if request == "mid":
            return "MidLevelSupport: Handling request"
        elif self.successor:
            return self.successor.handle_request(request)
        return "No handler found"

class HighLevelSupport(Handler):
    def handle_request(self, request):
        if request == "high":
            return "HighLevelSupport: Handling request"
        elif self.successor:
            return self.successor.handle_request(request)
        return "No handler found"

# Setup Chain
chain = LowLevelSupport(MidLevelSupport(HighLevelSupport()))
print(chain.handle_request("mid"))  # Output: MidLevelSupport: Handling request
print(chain.handle_request("high"))  # Output: HighLevelSupport: Handling request
print(chain.handle_request("unknown"))  # Output: No handler found
