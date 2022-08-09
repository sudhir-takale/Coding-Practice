#include <iostream>
using namespace std;

template <class name>

class base
{
public:
    name data;
    void setData(name d)
    {
        data = d;
    }
    void getData()
    {
        cout << "The value of the number is " << this->data << endl;
    }
};


int main()
{
    base<int> m;
    m.setData(345);
    m.getData();
    
    base<float> ma;
    ma.setData(34.5);
    ma.getData();

    return 0;
}