#include <iostream>

using namespace std;

// Base class for rectangle and square
class Shape {
public:
    Shape(int w = 0, int l = 0) : width(w), length(l) {}

    // Function to calculate area
    int area() const {
        return (length == 0) ? width * width : width * length;
    }

    // Function to calculate perimeter
    int perimeter() const {
        return (length == 0) ? 4 * width : 2 * (width + length);
    }

protected:
    int width, length;
};

// Derived class for square
class Square : public Shape {
public:
    Square(int w = 0) : Shape(w, w) {} // Ensuring both sides are equal
};

int main() {
    Shape rectangle(2, 5);
    Square square(3);

    cout << "Rectangle Area: " << rectangle.area() << endl;
    cout << "Rectangle Perimeter: " << rectangle.perimeter() << endl;
    cout << "Square Area: " << square.area() << endl;
    cout << "Square Perimeter: " << square.perimeter() << endl;

    return 0;
}
