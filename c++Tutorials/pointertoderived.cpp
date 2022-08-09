/* If you make the pointer of base class points to object of teh derived class then we can access only the base class method but if you want to access the method of base and derived class then you have to make the pointer of derived class ponts to object of derived class  */

#include <iostream>
using namespace std;

class Base
{
    int data;
    int num;

public:
    void setData(int n, int d)
    {
        data = n;
        num = d;
    }

    void getData()
    {
        cout << "The value of the data is " << data << endl;
        cout << "The value of the num is " << num << endl;
    }
};

class derived : public Base
{

    int n;
    int d;

public:
    void set(int data, int num)
    {
        n = data;
        n = num;
    }

    void get()
    {
        cout << "The value of n is " << n << endl;
        cout << "The value of d is " << d << endl;
    }
};


int main()
{
    Base *ptr;  // as we have make the pointer of the base class so we can acccess only the base class methods
   derived many;
    ptr = &many;
    ptr->setData(324, 56);
    ptr->getData();

    // if you want to access the derived class method we have make the pointer the derived class

        derived *num ;
        num = &many;  // stores the object of derived class
        num->set(435, 86);
        num->get();


    return 0;
}