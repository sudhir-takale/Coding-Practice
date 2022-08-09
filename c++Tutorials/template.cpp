#include <iostream>
using namespace std;

template <class T, class T2>

class Calculator
{
private:
    T data;
    T2 data2;

public:
    Calculator(T d, T2 n)
    {
        data = d;
        data2 = n;
    }
    void display()
    {
        cout << "The addition of the two int is " << data + data2 << endl;
        cout << "The substraction of two int is " << data - data2 << endl;
        cout << "The multiplication of two number is " << data * data2 << endl;
        cout << "The division of two number is " << float(data / data2) << endl;
    }
};

int main()
{
    Calculator<int, int> cal(123, 6);
    cal.display();
    cout << endl;

    Calculator<float, int> calc(12.4, 45);

    calc.display();
    return 0;
}