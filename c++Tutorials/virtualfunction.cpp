/* suppose you make pointer to the base class and you want to access the methods from derived class of the derived class then we use the virtual funtion as it provides the facility to access the base class methods
 */

//some errors in code

#include <iostream>
using namespace std;

class base
{
protected:
    int m;
    int k;

public:
    int g;
    void setData(int j, int n, int i)
    {
        k = j;
        m = i;
        g = n;
    }

    virtual void getData()
    {
        cout << "how are you " << endl;
        cout << "The value of m " << m << endl;
        cout << "The value of k is " << k << endl;
        cout << "The value of g is " << g << endl;
    }
};

class derived : public base
{
    int h;

public:
    // void setData(int a)
    // {
    //    h = a;
    // }
    void getData()
    {
        cout << "The value of m " << m << endl;
        cout << "The value of k is " << k << endl;
        cout << "The value of g is " << g << endl;
        cout << "The  value of h is " << h << endl;
    }
};

int main()
{
    derived *der;
    der->setData(34, 78, 78);
    der->getData();
    return 0;
}