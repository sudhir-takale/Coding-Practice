#include <iostream>
using namespace std;

class Student
{
    int roll_no;
    string name;
    char div;
    string address;
    float marks;

public:
    void setData(int r, float m, char d, string n, string a)
    {
        roll_no = r;
        marks = m;
        div = d;
        name = n;
        address = a;
    };

    void getData(void);
};

void Student ::getData()
{
    cout << "Your roll no is " << roll_no << endl;
    cout << "Your name is " << name << endl;
    cout << "Your div is " << div << endl;
    cout << "You are living at " << address << endl;
    cout << "You got " << marks << endl;
}

int main()
{ 

    Student shaurya;
    Student * s = & shaurya;  //  here we have created the student type pinter which store the address of the object
    // we can access the method the class by the pointer by dereferencing the pointer
    (*s).setData(3546, 324.45, 'f', "Shaurya mali", "laxmi dahiwadi");
    (*s).getData();
    cout << "By using the arrow operator" <<endl;

    // we can do the same work using the arrow operator 
    // arrow operator has already derefences the pointer which it points

    s->setData(32, 3.4, 'f', "sudhir takale", "laxmi dahiwadi");
    s->getData();


    return 0;
}