/* when we don't want to run the all the methods which are not required then we use nesting method were we call the function in another function . we can use the function which are private part also .*/
// we can call any function inside any function

#include <iostream>

using namespace std;

class children
{
    float height;
    float age;
    char name[12];
    void getName(); // private function we can also access in nesting

public:
    void GetHeight();
    void GetAge();
    void printDetails();
};

void children ::getName()
{
    cout << "Enter the name of the child " << endl;
    cin >> name;
}

void children ::GetAge()
{
    cout << "Enter the age of the child " << endl;
    cin >> age;
}

void children ::GetHeight()
{
    getName(); // nesting of function

    cout << "Enter the height of the child " << endl;
    cin >> height;
}

void children ::printDetails()
{
    GetHeight(); // here we use the nesting concept
    GetAge();
    cout << "The name of child is " << name << " with the age of " << age << " and  height of " << height << " cm . " << endl;
}

int main()
{

    children shaurya;
    shaurya.printDetails();

    return 0;
}