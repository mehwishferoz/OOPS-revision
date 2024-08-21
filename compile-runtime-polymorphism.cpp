#include <iostream>
using namespace std;

class Animal {
public:
    // Compile-time polymorphism: Function overloading
    void speak() {
        cout << "Animal speaks in general." << endl;
    }

    void speak(string sound) {
        cout << "Animal makes a sound: " << sound << endl;
    }

    // Runtime polymorphism: Virtual function
    virtual void move() {
        cout << "Animal moves." << endl;
    }
};

class Dog : public Animal {
public:
    // Overriding the move function for runtime polymorphism
    void move() override {
        cout << "Dog runs." << endl;
    }
};

class Cat : public Animal {
public:
    // Overriding the move function for runtime polymorphism
    void move() override {
        cout << "Cat jumps." << endl;
    }
};

int main() {
    // Compile-time polymorphism
    Animal animal;
    animal.speak();
    animal.speak("Roar");

    // Runtime polymorphism
    Animal* animalPtr;

    Dog dog;
    Cat cat;

    animalPtr = &dog;
    animalPtr->move();  // Calls Dog's move

    animalPtr = &cat;
    animalPtr->move();  // Calls Cat's move

    return 0;
}
