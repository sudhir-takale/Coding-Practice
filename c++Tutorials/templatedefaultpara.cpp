// We can give default parameter in template when we not pass the any parameters(data types) at that time it will take the default parameters

#include <iostream>
using namespace std;

template <class t = int, class t2 = string, class t3 = float>
class Student
{
public:
    t roll_no;
    t2 name;
    t3 marks;

    Student(t roll, t2 na, t3 mar)
    {
        roll_no = roll;
        name = na;
        marks = mar;
    };
    void getData()
    {
        cout << "Roll no of student is " << roll_no << endl;
        cout << "His name is " << name << endl;
        cout << "His marks are " << marks << endl;
    };
};


int main()
{
    // you can create the default args list which takes the default args
    Student<> shaurya(23, "shaurya", 34.4);
    shaurya.getData();
    cout << endl;
    // you can define your own data types also
    Student<float, char, int> shaurya2(2.3, 's', 34);
    shaurya2.getData();

    return 0;
}