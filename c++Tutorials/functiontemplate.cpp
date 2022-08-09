#include <iostream>
using namespace std;

// we can define the template which takes different datatypes as args
// you can pass any args in function which acts according to your args

template <class t, class t2>

float sum(t a, t2 b)
{
    float n = (a + b) ;
    return n;
}


int main()
{

    float add;
    float mul;

    add = sum(324, 65.56);
    cout << add << endl;

    mul = sum(12, 3.4);
    cout << mul << endl;

    return 0;
}