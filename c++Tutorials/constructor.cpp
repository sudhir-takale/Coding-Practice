// constructor is used to initialize the object of the class
// by using the constuctor we can eliminate many functions like setdata setvalue

#include <iostream>
using namespace std;

class complex
{

    int a;
    int b;

public:
    complex(int, int);
    void printNum()
    {
        cout << "The complex number is " << a << " + " << b << "i" << endl;
    }
};

complex ::complex(int a, int c)
{
    a = a;
    b = c;
}

int main()
{

    // complex c1(12, 4); // this call is called as the implicit call

    complex c1 = complex(234, 35); // this is explicit call

    c1.printNum();

    return 0;
}

/* 
notes 
they cannot return any values any typees
it can have default args
we cannont refer the address 
it should declare in public section
