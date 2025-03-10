// Real Subject
class RealImage implements Image {
    constructor(private filename: string) {
        this.loadFromDisk();
    }

    private loadFromDisk(): void {
        console.log(`Loading ${this.filename} from disk...`);
    }

    display(): void {
        console.log(`Displaying ${this.filename}`);
    }
}

// Proxy
class ImageProxy implements Image {
    private realImage: RealImage | null = null;

    constructor(private filename: string) {}

    display(): void {
        if (!this.realImage) {
            this.realImage = new RealImage(this.filename);
        }
        this.realImage.display();
    }
}

// Usage
const image = new ImageProxy("test.jpg");
image.display();  // Load and show the image
image.display();  // Show the image without loading it
