#include <iostream>

// Base class with a final method
class Base {
public:
    virtual void show() final {
        std::cout << "This is the Base class method.\n";
    }
};

// Derived class trying to override the final method
class Derived : public Base {
    // Uncommenting this will cause a compile-time error
    // void show() override {
    //     std::cout << "This is the Derived class method.\n";
    // }
};

// Another class with final keyword preventing further inheritance
class FinalClass final {
public:
    void display() {
        std::cout << "This is a FinalClass method.\n";
    }
};

// Trying to inherit from a class marked as final
// Uncommenting this will cause a compile-time error
// class AnotherClass : public FinalClass {
//     // class definition
// };

int main() {
    Base base;
    base.show();  // Calls Base class method

    Derived derived;
    derived.show();  // Calls Base class method, cannot be overridden

    FinalClass finalClass;
    finalClass.display();  // Calls FinalClass method

    return 0;
}

/*
The final keyword in C++ is used to prevent further inheritance of classes and overriding of virtual methods.
It helps enforce design constraints, ensuring that certain classes or methods remain unchanged by future derived classes.
*/