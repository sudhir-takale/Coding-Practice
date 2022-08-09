#include <iostream>
using namespace std;

// defining the function outside template .

template <class t>
class sudhir
{
public:
    t data;
    sudhir(t a)
    {
        data = a;
    }
    // void printData(){ // THIS IS CALLED AS THE INLINE DECLARATION
    //     cout << "The value of data is " << data << endl;
    // };
};

template <class t>
void sudhir<t>::printData()
{
    cout << "The value of a is " << data << endl;
}

int main()
{

    sudhir<float> s(345.56);
    s.printData();

    sudhir<int> s1(345);
    s1.printData();

    sudhir<char> s3('3');
    s3.printData();

    return 0;
}