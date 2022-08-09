// if you want to create the multiple object of the same class then you can create an array of your size then u can access it by using for loop

#include <iostream>
using namespace std;

class student
{
    int roll;
    char name[5];
    int marks;

public:
    void setInfo();
    void getInfo();
};

void student ::setInfo()
{

    cout << "Enter the name of student :" << endl;
    cin >> name;
    cout << "Enter the roll no. of student :" << endl;
    cin >> roll;
    cout << "Enter the marks of student :" << endl;
    cin >> marks;
};

void student ::getInfo()
{
    cout << "The name of student is " << name << " roll no. is " << roll << " and the marks obtained are " << marks << endl;
}

int main()
{

    int n;
    cout << "How many object of the class you want to create. Ente the number :" << endl;
    cin >> n;

    student divC[n];  // n is the size of object 
    for (int i = 0; i < n; i++)  // for accessing every object of array
    {
        divC[i].setInfo();
        divC[i].getInfo();

        
    }

    return 0;
}