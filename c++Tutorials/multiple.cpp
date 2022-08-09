#include <iostream>
using namespace std;

class base1
{
protected:
    int base1;

public:
    void setbase1(int n)
    {
        base1 = n;
    }
};

class base2
{
protected:
    int base2;

public:
    void setbase2(int n)
    {
        base2 = n;
    }
};

class derived : public base1, public base2 //syntax of the multiple inheritace
{

public:
    void show()
    {
        cout << "base2 is " << base2 << endl;
        cout << "base1 is " << base1 << endl;
        cout << "The sum is " << (base1 + base2) << endl;
    }
};

int main()
{

    derived s;
    s.setbase1(23);
    s.setbase2(34);
    s.show();

    return 0;
}