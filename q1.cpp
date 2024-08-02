/*Create a class Person with data members: name and age. Add one parameterised constructor to this class. Create a subclass Student with data members: UID and
semester. The student class also contains one parameterised constructor. Override printinfo function that assigns value to the data member name. Write the main
function and create an object of subclass and demonstrate its use.*/
#include<bits/stdc++.h>
using namespace std;

class Person{
    protected:
    string name;
    int age;

    public:
    Person(string n = "", int a = 0) : name(n), age(a)
    {}

    void setname(string s){
        this->name = s;
    }

    void printInfo(){
        cout << "Name: " << this->name <<endl
             << "Age: " << this->age <<endl;
    }
};

class Student : public Person{
    public:
    int uid, sem;

    Student(string n, int a, int u, int s) : Person(n, a), uid(u), sem(s)
    {}

    void printStudentInfo(){
        Student::printInfo();
        cout<<"UID: "<<uid<<endl;
        cout<<"Semester: "<<sem<<endl;
    }
};

int main()
{
    Student student("Alice", 20, 12345, 3);

    student.printInfo();
    student.printStudentInfo();

    student.setname("Bob");

    cout << "After modifying:" << endl;
    student.printStudentInfo();
    
    return 0;
}