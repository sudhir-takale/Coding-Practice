#include <iostream>
using namespace std;

class shop
{

    int items[12];
    int price[12];
    int counter = 0;

public:
    void getPrice();
    void setprice();
    void initcounter();
    {
        counter = 0;
    };
};

void shop ::getPrice()
{
    cout << "Enter the item " << endl;

    cin >> items[counter];

    cout << "Enter the price of item :" << endl;
    cin >> price[counter];
    counter++;
}
void shop ::setprice()
{
    for (int i = 0; i < counter; i++)
    {
        cout << items[i] << price[i];
    }
}

int main()
{

    shop s1;

    s1.initcounter();
    s1.getPrice();
    s1.setprice();

    return 0;
}