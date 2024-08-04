#include <iostream>
using namespace std;

// Base class (Superclass)
class Vehicle {
protected:
    int speed;
    int capacity;

public:
    // Constructor
    Vehicle(int spd, int cap) : speed(spd), capacity(cap) {}

    // Virtual method (for polymorphism)
    virtual void displayInfo() const {
        cout << "Speed: " << speed << " km/h" << endl;
        cout << "Capacity: " << capacity << " people" << endl;
    }
};

// Derived class (Subclass)
class Car : public Vehicle {
private:
    string model;

public:
    // Constructor
    Car(int spd, int cap, string mdl) : Vehicle(spd, cap), model(mdl) {}

    // Overriding base class method
    void displayInfo() const override {
        cout << "Car Model: " << model << endl;
        Vehicle::displayInfo();
    }
};

// Another derived class
class Bus : public Vehicle {
private:
    int numberOfStops;

public:
    // Constructor
    Bus(int spd, int cap, int stops) : Vehicle(spd, cap), numberOfStops(stops) {}

    // Overriding base class method
    void displayInfo() const override {
        cout << "Bus with " << numberOfStops << " stops" << endl;
        Vehicle::displayInfo();
    }
};

int main() {
    // Creating objects of derived classes
    Car myCar(180, 5, "Toyota Camry");
    Bus cityBus(60, 30, 10);

    // Demonstrating polymorphism
    Vehicle* vehiclePtr;

    vehiclePtr = &myCar;
    vehiclePtr->displayInfo();

    cout << endl;

    vehiclePtr = &cityBus;
    vehiclePtr->displayInfo();

    return 0;
}

/*
Concepts Demonstrated:
    Encapsulation: Each class bundles its data and methods together.
    Inheritance: Car and Bus classes inherit from the Vehicle base class.
    Polymorphism: The same function call (displayInfo()) behaves differently depending on the object type.
    Abstraction: The Vehicle class provides a general interface for its derived classes.
*/