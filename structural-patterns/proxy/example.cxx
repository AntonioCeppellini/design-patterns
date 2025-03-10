#include <iostream>
#include <memory>
#include <string>

// Subject
class Image {
public:
    virtual void display() const = 0;
    virtual ~Image() = default;
};

// Real Subject
class RealImage : public Image {
private:
    std::string filename;
public:
    RealImage(const std::string& file) : filename(file) {
        loadFromDisk();
    }

    void loadFromDisk() const {
        std::cout << "Loading " << filename << " from disk...\n";
    }

    void display() const override {
        std::cout << "Displaying " << filename << "\n";
    }
};

// Proxy
class ImageProxy : public Image {
private:
    std::string filename;
    mutable std::unique_ptr<RealImage> realImage;
public:
    ImageProxy(const std::string& file) : filename(file), realImage(nullptr) {}

    void display() const override {
        if (!realImage) {
            realImage = std::make_unique<RealImage>(filename);
        }
        realImage->display();
    }
};

// Usage
int main() {
    ImageProxy image("test.jpg");
    image.display();  // Load and show the jpg
    image.display();  // Show the jpg without loading it
    return 0;
}
