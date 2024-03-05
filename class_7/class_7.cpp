#include <iostream>

class Circle {
private:
    double radius;

public:
    // Getter for radius
    double getRadius() const {
        return radius;
    }

    // Setter for radius
    void setRadius(double newRadius) {
        if (newRadius >= 0)
            radius = newRadius;
        else
            std::cerr << "Radius cannot be negative!" << std::endl;
    }

    // Function to calculate area
    double calculateArea() const {
        return 3.14159 * radius * radius;
    }
};

int main() {
    Circle circle;

    // Setting radius using setter
    circle.setRadius(7.5);

    // Getting radius using getter
    std::cout << "Radius: " << circle.getRadius() << std::endl;
    std::cout << "Area: " << circle.calculateArea() << std::endl;

    // Attempting to set negative radius (should trigger error message)
    circle.setRadius(-5.0);

    return 0;
}
