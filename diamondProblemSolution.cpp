#include <iostream>
using namespace std;

class Animal {
public:
    void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

class Mammal : virtual public Animal {
};

class Bird : virtual public Animal {
};

class Bat : public Mammal, public Bird {
};

int main() {
    Bat bat;
    bat.sound(); // No ambiguity now, single copy of Animal::sound() is inherited

    return 0;
}

/*
Diamond Problem Issue:
    When calling bat.sound(), it's unclear whether to use Mammal::sound() or Bird::sound(). 
    This is the diamond problem, where the derived class (Bat) ends up with two copies of the base class (Animal) methods.
Resolving the Diamond Problem:
    To resolve this ambiguity, C++ provides a solution using virtual inheritance. 
    By making the inheritance of Animal virtual in Mammal and Bird, Bat will have only one copy of Animal's methods.
*/