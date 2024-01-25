#include <iostream>

//Interface class

class Shape {
public:
    // pure virtual methods
    virtual double getArea() const = 0;
    virtual double getPerimeter() const = 0;
};

//rectangle class uses "shape" named interface. pure virtual functions in the up, implemented in below.

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    // we supposed to use this function here (with body)
    double getArea() const override {
        return length * width;
    }

    double getPerimeter() const override {
        return 2 * (length + width);
    }
};

int main() {
    Rectangle rectangle(5.0, 3.0);

    std::cout << "Dikdörtgen Alanı: " << rectangle.getArea() << std::endl;
    std::cout << "Dikdörtgen Çevresi: " << rectangle.getPerimeter() << std::endl;

    return 0;
}
