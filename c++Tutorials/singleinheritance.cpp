#include <iostream>
using namespace std;

class student
{

    int roll_no;

public:
    void setRollNo(int n)
    {
        roll_no = n;
    }
    void display()
    {
        cout << " your roll no is " << roll_no << endl;
    }
};
class exam : public student
{
    int physics;
    int maths;

public:
    void setmarks(int, int);
    void getmarks();
};

void exam ::setmarks(int a, int c)
{
    setRollNo(123);
    display();
    physics = a;
    maths = c;
};
void exam ::getmarks()
{
    cout << "You get marks in physics are " << physics << endl;
    cout << "You get marks in maths are " << maths << endl;
    cout << "your pecentage is " << (physics + maths) / 2 << endl;
}

int main()
{

    exam sudhir;
    sudhir.setmarks(99, 78);
    sudhir.getmarks();

    return 0;
}
