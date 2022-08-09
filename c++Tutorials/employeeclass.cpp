#include <iostream>
#include <string> // as we are using the string in the given program
using namespace std;

class Employee
{
    string name;
    string role;
    int salary;
    float workingHours;

public:
    Employee()
    {
        cout << "man3 is called " << endl; // default constructor  is required for obeject which nothing do anything
    };
    Employee(string, string, int, float);
    Employee(int, int, string, string);

    void showDetails(void);
};

void Employee::showDetails(void)
{
    cout << "The name of employee is " << name << endl;
    cout << "He is working as an " << role << endl;
    cout << "His salary is " << salary << endl;
    cout << "He is worked in company from " << workingHours << endl;
}
// constructor defiantion
Employee ::Employee(string n, string ro, int sa, float hr)
{
    cout << "Hi man is called " << endl;
    name = n;
    role = ro;
    salary = sa;
    workingHours = hr;
}

Employee ::Employee(int sa, int hr, string my = "sudhir", string ro = "sde3")
{
    cout << "Man 2 is calling " << endl;
    name = my;
    role = ro;
    salary = sa;
    workingHours = hr;
}
int main()
{

    // Employee man("sudhir", "sde", 23456436, 354.6754);
    // man.showDetails();
    // Employee man2 = Employee(35443, 746);
    // man2.showDetails();
    Employee man3;
    man3.showDetails();
    return 0;
}