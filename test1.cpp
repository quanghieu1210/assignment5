#include <iostream>
using namespace std;

class Circle {
private:
    double radius;
    const double pi = 3.14159;

public:
    // Default constructor
    Circle() {
        radius = 0.0;
    }

    // Constructor with argument
    Circle(double r) {
        radius = r;
    }

    // Mutator function for radius
    void setRadius(double r) {
        radius = r;
    }

    // Accessor function for radius
    double getRadius() const {
        return radius;
    }

    // Calculates and returns the area of the circle
    double getArea() const {
        return pi * radius * radius;
    }

    // Calculates and returns the diameter of the circle
    double getDiameter() const {
        return radius * 2;
    }

    // Calculates and returns the circumference of the circle
    double getCircumference() const {
        return 2 * pi * radius;
    }
};

int main() {
    double r;
    cout << "Enter the radius of the circle: ";
    cin >> r;

    // Create a Circle object with the user-input radius
    Circle c(r);

    // Print the area, diameter, and circumference of the circle
    cout << "Area of the circle is: " << c.getArea() << endl;
    cout << "Diameter of the circle is: " << c.getDiameter() << endl;
    cout << "Circumference of the circle is: " << c.getCircumference() << endl;

    return 0;
}
