#include <bits/stdc++.h>
using namespace std;

class student
{
    int marks;
    int status;
    int fees;
    float height;

public:
    void getData(int, int, int, float);
    void printDetails()
    {
        cout << "You get marks as " << marks << endl;
        cout << "You are pass or fail " << status << endl;
        cout << "You pay fees of " << fees << endl;
        cout << "Your height is " << height << endl;
    }
};

void student ::getData(int m, int s, int f, float h)
{

    marks = m;
    status = s;
    fees = f;
    height = h;
}

int main()
{

    student s1;

    s1.getData(234, 1, 46, 456);
    s1.printDetails();

    return 0;
}