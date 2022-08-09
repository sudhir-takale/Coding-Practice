// the constructor takes always the init values first we can give any values to data members of the classs

#include <iostream>
#include <string>
using namespace std;

class student
{
    int roll_no;
    float marks;
    char div;
    string address;
                                          //init of the constructor
public:
    student(int roll, float mar, char di, string add) : marks(45612), roll_no(12), address("sa")  {

    
    div = di; 
    address = add;

}


 void getData(void)
{
    cout << "Roll no is " << roll_no << endl;
    cout << "Your address is " << address << endl;
    cout << "You got the " << marks << endl;
    cout << "Your divison is " << div << endl;
}

};

int main()
{
    student shaurya(12, 12.5, 'f', "how are you");
    shaurya.getData();

    return 0;
}