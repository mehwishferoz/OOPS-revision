#include<bits/stdc++.h>
using namespace std;

int main()
{
    class {
        public:
        void display() {
            cout<<"This is an anonymous class" << endl;
        }
    } obj;

    obj.display();
    
    return 0;
}

/*
In C++, anonymous classes (also known as unnamed classes) are a feature where you define a class without giving it a name.
These are often used when you need a class for a short-lived use, typically as a local class or a immediate use.
Key Points: 
    - Limited scope
    - No name
    - Short-lived
*/