#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    virtual void sound(){
        cout<<"Animal makes some sound"<<endl;
    }
};

class Dog : public Animal{
    public:
    void sound() override {
        cout<<"Dog barks!"<<endl;
    }
};

class Cat : public Animal{
    public:
    void sound() override {
        cout<<"Cat meows!"<<endl;
    }
};

int main()
{
    Animal *animalptr;
    Dog dog;
    Cat cat;

    animalptr = &dog;
    animalptr->sound();

    animalptr = &cat;
    animalptr->sound();
    
    return 0;
}