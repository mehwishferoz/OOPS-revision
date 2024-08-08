#include <bits/stdc++.h>
using namespace std;

class Base
{
public:
    virtual ~Base()
    {
        cout << "base class destructor called" << endl;
    }
};

class Derived : public Base
{
public:
    ~Derived()
    {
        cout << "derived class destructor called" << endl;
    }
};

int main()
{
    Base *obj = new Derived();
    delete obj;
    return 0;
}

/*
A virtual destructor is a destructor that is declared with the virtual keyword in a base class. 
The primary purpose of a virtual destructor is to ensure that the destructor of the most derived class 
(the actual class of the object) is called when an object is deleted through a base class pointer.
*/