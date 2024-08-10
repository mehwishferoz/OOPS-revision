#include <bits/stdc++.h>
using namespace std;

/*
Write a C++ program to model a point object on a 2D plane.
The point is described by x and y coordinates. The point object can be moved
to any location in a 2D plane and the coordinates can be reset(0,0). The C++ program shall
also print the coordinates of a point object.
Apply default, parameterized and copy constructor.
*/

class point
{
public:
    int x, y;

    point()
    {
        this->x = 0;
        this->y = 0;
    }

    point(int a, int b)
    {
        this->x = a;
        this->y = b;
    }

    point(const point &obj)
    {
        this->x = obj.x;
        this->y = obj.y;
    }

    void move(int a, int b)
    {
        this->x = a;
        this->y = b;
    }

    void reset()
    {
        this->x = 0;
        this->y = 0;
    }

    void show()
    {
        cout << "(" << this->x << ", " << this->y <<')' << endl;
    }
};

int main(){
    point m(2,3), n, o(m);
    m.show();
    m.reset();
    m.show();
    m.move(5,6);
    m.show();
    n.show();
    o.show();

    return 0;
}