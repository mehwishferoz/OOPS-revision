#include <bits/stdc++.h>
using namespace std;

class vehicle
{
public:
    int vno;
    string color;

    vehicle(int n = 0, string c = "") : vno(n), color(c) {}

    void show()
    {
        cout << "Vehicle number: " << this->vno << endl
             << "Color: " << this->color << endl;
    }
};

class scooter : public vehicle
{
public:
    string range;

    scooter(int n = 0, string c = "", string m = "") : vehicle(n, c), range(m) {}

    void show()
    {
        vehicle ::show();
        cout << "Range: " << this->range << endl;
    }
};

class ola : public scooter
{
public:
    string chargingTime;

    ola(int n = 0, string c = "", string m = "", string ct = "") : scooter(n, c, m), chargingTime(ct) {}

    void show()
    {
        scooter ::show();
        cout << "Charging Time: " << this->chargingTime << endl;
    }
};

int main()
{
    ola ola1(123, "white", "120 Km", "6.5 Hr");
    ola1.show();

    return 0;
}