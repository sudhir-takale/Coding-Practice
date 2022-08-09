#include <iostream>
using namespace std;

class student
{
protected:
    int rollNo; // we can inherite protected memnber of the class

public:
    void setrollno(int n)
    {
        rollNo = n;
    }

    void getrollno()
    {
        cout << "Your roll no is  " << rollNo << endl;
    }
};

class exam : public student
{
protected:
    float maths, physics;

public:
    void setMarks(int m, int p)
    {
        maths = m;
        physics = p;
    }
    void getMarks()
    {
        cout << "your maths marks are " << maths << endl;
        cout << "your physics marks are " << physics << endl;
    }
};

class result : public exam
{
    float percentage;

public:
    void display()
    {
        getrollno(); // we have define memeber like this
        getMarks();
        cout << "you got " << (maths + physics) / 2 << "%" << endl;
    }
};

int main()
{

    result sudhir;
    sudhir.setrollno(345);
    sudhir.setMarks(99, 96);
    sudhir.display();

    return 0;
}