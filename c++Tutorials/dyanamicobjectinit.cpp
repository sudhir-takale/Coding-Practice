#include <iostream>
using namespace std;

class banking
{
    int principal;
    int years;
    float interestRate;
    float returnval;

public:
    banking() {}
    banking(int, int, float);
    banking(int, int, int);
    void showAmount();
};

void banking::showAmount()
{
    cout << "The principal value was " << principal << "and after " << years << " years. Your return becomes " << returnval << endl;
}

banking::banking(int p, int y, float r)
{

    principal = p;
    years = y;
    interestRate = r;

    returnval = principal;

    for (int i = 0; i < y; i++)
    {
        returnval = returnval * (1 + r);
    }
}

banking::banking(int p, int y, int R)
{

    principal = p;
    years = y;
    interestRate = float(R) / 100;  // we have to convert interst rate in float as it given in percentage

    returnval = principal;
    for (int i = 0; i < y; i++)
    {
        returnval = returnval * (1 + interestRate);
    }
}
 
int main()
{
  int p, y, r, R;
    cout << "Enter the values of p y r" << endl;
    cin >> p >> y >> r;
    cout << "Enter the values of p y R " << endl;
    cin >> p >> y >> R;

    banking buyer1(p, y, r);
    buyer1.showAmount();

    banking buyer2(p, y, R);
    buyer2.showAmount();

    return 0;
}