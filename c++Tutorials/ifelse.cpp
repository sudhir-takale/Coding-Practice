#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

int main() {

      int a = 23;
      float k = 233.5; // it is required bcoz it takes double as the float
      int f = int(k); // typecasting of k into integer
      int &c = a; //have the reference of a into c & operator is used for that
      cout<<"the value of a is "<<a<<endl;
      cout<<"the value of the k "<<k<<endl;
      cout<<"f"<<f<<endl;
      cout<<c<<endl;
      cout<<"the typecast of k into int is "<<int(k)<<endl; //also it is a typecasting


// it will gives the space of 8 spaces before the integer
    cout<<"the new manipulation is "<<setw(8)<<a<<endl;


    return 0;
}