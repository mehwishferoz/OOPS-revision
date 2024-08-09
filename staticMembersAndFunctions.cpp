#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;
    //by default static variables are initialized by 0 

public:
    void setdata(void);
    void display(void);
    static void getcount(void)
    {
        cout << "The count of employee is: " << count << endl
             << endl;
        // cout<<id; this will throw an error
        //static member functions can only access static variables or functions of the class they belong
    }
};

void Employee::setdata(void)
{
    cout << "Enter the ID of employee :";
    cin >> id;
    count++;
}

void Employee::display(void)
{
    cout << "The ID of employee " << count << " is " << id << endl;
}

int Employee ::count; //static data member of the class Employee

int main()
{
    Employee mehwish, aman, shreyanka, chidambar;

    // mehwish.id = 1; this action cannot be done since id is a private member of class employee

    mehwish.setdata();
    mehwish.display();
    Employee::getcount();

    aman.setdata();
    aman.display();
    Employee::getcount();

    shreyanka.setdata();
    shreyanka.display();
    Employee::getcount();

    chidambar.setdata();
    chidambar.display();
    Employee::getcount();

    return 0;
}

/*
Static local variable = class variables
Visibility: class
Lifetime: till termination of program
Default value:0
Storage:heap

Local Variable
Visibility: class
Lifetime: until execution of class
Default value:garbage
Storage:stack

Global variable
Visibility: file
Lifetime: till termination of program
Default value:0
Storage:heap
*/