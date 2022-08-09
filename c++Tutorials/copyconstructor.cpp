// #include<iostream>
// using namespace std;

// class number{
//     int a;

//     public:
//     number(int num){
//         a = num;
//     }
//     void getnum(){
//         cout<<"The value of num is "<<a<<endl;
//     }
//     number(){ }

//     number(number &obj){  //this is copy constructor which can take a reference of object
//         a = obj.a;
//     }

// };

// int main() {

//     number s1(24);
//     s1.getnum();
//     number w2(s1);  // we pass the object to the other obhject
//     w2.getnum();

//     return 0;
// }

#include <iostream>
using namespace std;

class name
{
    string naming;
    int age;

public:
    name(string, int);
    name(name &obj);
    name()
    {
        cout << "Default constructor is called " << endl;
    };
    void getdata()
    {
        cout << "Your name is " << naming << " and your age is " << age << endl;
    }
};

name ::name(string n, int ag = 345)
{
    naming = n;
    age = ag;
}

name::name(name &obj)
{
    naming = obj.naming;
    age = obj.age;
};
int main()
{

    name sudhir("sat");  //it will take default args
    sudhir.getdata();

    name tare("sat", 45); // we given both the args in constructor
    tare.getdata();

    name sham(sudhir);  // we pass here the referece of the object
    sham.getdata();
    return 0;
};