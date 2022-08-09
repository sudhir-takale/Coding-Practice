// If any method which is common in many classes now which method we are call is called as the ambiguity

#include <iostream>
using namespace std;

class Base
{
    int a;

public:
    void setData(int aa)
    {
        a = aa;
    }
    void greet()
    {
        cout << "Hii how are you !" << endl;
    }
    void printData()
    {
        cout << "The value of the a is " << a << endl;
    }
};

class Base2
{

    int n;

public:
    void Data(int a)
    {
        n = a;
    }
    void greet()
    {
        cout << "Hii how are you i am fine " << endl;
    }

    void Data()
    {
        cout << "The value of n is " << n << endl;
    }
};

class Derived : public Base, public Base2
{

    int name;

public:
    void getName(int na)
    {
        name = na;
    }
    void greet()
    {
        Base::greet(); /// now the greet function from base class is called
    }
};
int main()
{
    Derived d;
    d.greet();
    return 0;
}