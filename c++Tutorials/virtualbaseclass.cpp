/*
base         derived
student -->  test
student -->  sports
sports -->   result
test -->     result


 vbc ---> as roll number flows twice with test and sport class so we solve this ambighuity with help of the vbc

 when the test and sports are derived the data member of the student class flows twice to both. after that when result is inherited by the sports and test class then the same data member flows twice by sport and test class in the result class so there is an creation of ambiguity in the result class due to same data member so this ambiguity is removed by VBC


in short it vbs(student class) will pass his data member indirectly to the result class
*/

#include <iostream>
    using namespace std;

class student
{
protected:
    int roll_no;

public:
    void setNumber(int n)
    {
        roll_no = n;
    }

    void printRoll(void)
    {
        cout << "Your roll number is " << roll_no << endl;
    }
};

class test : virtual public student
{

protected:
    float maths, physics;

public:
    void setMarks(int p, int m)
    {
        maths = m;
        physics = p;
    }

    void getMarks(void)
    {
        cout << "Your maths marks are " << maths << endl;
        cout << "Your physics marks are " << physics << endl;
    }
};

class sports : virtual public student
{
protected:
    float score;

public:
    void setScore(int n)
    {
        score = n;
    }
    void printScore(void)
    {
        cout << "Your sports marks are " << score << endl;
    }
};

class result : public test, public sports
{

    int total;

public:
    void display()
    {
        total = physics + maths + score;
        printRoll();
        getMarks();
        printScore();
        cout << "You got the " << total << " marks in your academic year. " << endl;
    }
};

int main()
{
    result sudhir;
    sudhir.setNumber(12);
    sudhir.setMarks(23, 4356);
    sudhir.setScore(345);
    sudhir.display();

    return 0;
}