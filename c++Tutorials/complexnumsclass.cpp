#include <iostream>
using namespace std;

class Complex
{

    int x, y;

public:
    void getNums(void);
    void printNum(void);
};

void Complex ::getNums()
{
    cout << "\nEnter the values of the input :\n"
         << endl;
    cin >> x >> y;
}

void Complex ::printNum()
{
    cout << "The complex number is " << x << " + " << y << "i" << endl;
}

int main()
{

    Complex c1;
    c1.getNums();
    c1.printNum();

    return 0;
}