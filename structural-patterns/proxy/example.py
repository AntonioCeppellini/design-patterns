from abc import ABC, abstractmethod

# Subject
class Image(ABC):
    @abstractmethod
    def display(self):
        pass

# Real Subject
class RealImage(Image):
    def __init__(self, filename):
        self.filename = filename
        self.load_from_disk()
    
    def load_from_disk(self):
        print(f"Loading {self.filename} from disk...")
    
    def display(self):
        print(f"Displaying {self.filename}")

# Proxy
class ImageProxy(Image):
    def __init__(self, filename):
        self.filename = filename
        self.real_image = None
    
    def display(self):
        if self.real_image is None:
            self.real_image = RealImage(self.filename)
        self.real_image.display()

# Usage
image = ImageProxy("test.jpg")
image.display()  # Load and show the image
image.display()  # Show the image without loading it
