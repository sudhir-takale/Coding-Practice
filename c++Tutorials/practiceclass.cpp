// if you want to private value of the data member then you have to write the function for it which can return the value of the private var then youcan cout it.

#include <iostream>
using namespace std;

class student
{
protected:
    int data;
    int n;

public:
    void setData(int a, int b)
    {
        data = a;
        n = b;
    }
    int returnk()
    {
        return data;
    }
    void printData()
    {
        cout << data << endl;
        cout << n << endl;
    }
};

class sudhir : public student
{
public:
    void display()
    {
        cout << returnk();
    }
};

int main()
{

    sudhir su;
    su.setData(12, 45);
    su.display();

    return 0;
}