#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;
    int rollNumber;

public:
    Student(string n, int a, int r) {
        name = n;
        age = a;
        rollNumber = r;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << ", Roll Number: " << rollNumber << endl;
    }
};

int main() {
    Student students[3] = {
        Student("Alice", 20, 101),
        Student("Bob", 21, 102),
        Student("Charlie", 19, 103)
    };

    for(int i = 0; i < 3; i++) {
        students[i].display();
    }

    return 0;
}
