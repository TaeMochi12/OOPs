// Key Features of Abstract Class:
// 1. Cannot be instantiated: You cannot create an object of an abstract class.
// 2. Can have both abstract and concrete methods: Abstract classes can have methods with no implementation (abstract methods) 
// and methods with complete implementation.
// 3. Forces subclass implementation: Any class that inherits from an abstract class must provide implementations for all abstract methods.

// Pure Virtual Function/ Abstract Function
// Also called Absract function.
// A pure virtual function in c++, is a virtual function for 
// which we can have implementation, but we must override that function in the derived class, otherwise the derived class will also become abstract class.

#include <iostream>
using namespace std;

// Abstract class
class Shape {
public:
    // Pure virtual function (abstract method)
    virtual void draw() = 0;

    // Concrete method (has implementation)
    void info() {
        cout << "This is a shape" << endl;
    }
};

// Derived class
class Circle : public Shape {
public:
    // Implementing the abstract method
    void draw() {
        cout << "Drawing a circle" << endl;
    }
};

int main() {
    // Shape s;  // This would be an error because Shape is abstract
    Circle c;
    c.draw();   // Output: Drawing a circle
    c.info();   // Output: This is a shape
    return 0;
}
