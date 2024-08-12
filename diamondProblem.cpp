#include <iostream>
using namespace std;

class Animal
{
public:
    void sound()
    {
        cout << "Animal makes a sound" << endl;
    }
};

class Mammal : public Animal
{
public:
    void sound()
    {
        cout << "Mammal makes a sound" << endl;
    }
};

class Bird : public Animal
{
public:
    void sound()
    {
        cout << "Bird makes a sound" << endl;
    }
};

// Bat inherits from both Mammal and Bird
class Bat : public Mammal, public Bird
{
public:
    void sound()
    {
        // Ambiguity: which sound() method to call?
        Mammal::sound(); // Explicitly calling Mammal's sound method
        Bird::sound();   // Explicitly calling Bird's sound method
    }
};

int main()
{
    Bat bat;
    bat.sound(); // Calls the sound method of both Mammal and Bird

    return 0;
}

/*
The "diamond problem" is a well-known issue in object-oriented programming (OOP) that arises with multiple inheritance. 
It occurs when a class inherits from two classes that both inherit from a common base class. 
This can lead to ambiguity because the derived class might inherit two copies of the base class's members.
*/