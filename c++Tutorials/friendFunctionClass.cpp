// when you want to give the access of every method and private variable to external class then we use the friend method to give the access to it 
// friend function takes object as the argument 

#include <iostream>
using namespace std;

class y;   //forward declaration is necessary


class x
{
    int data;
    friend void add(x, y);
    // this will give access to all methods of x class to the add function
public:
    void setvalue(int val)
    {
        data = val;
    }
};

class y
{
    int data;
    friend void add(x, y);
    // this will give access to all methods of y class to the add function

public:
    void setvalue(int valw)
    {
        data = valw;
    }
};

void add(x valw, y val)
{
    cout << "the sum of numbers is " << (valw.data + val.data) << endl;
}

int main()
{

    x a;
    a.setvalue(45);

    y b;
    b.setvalue(345);
    add(a, b);   //here we passed two objects of the classes

    return 0;
}