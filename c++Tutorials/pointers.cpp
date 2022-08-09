// pointers --> are those who store the address of another variable
#include<bits/stdc++.h>
using namespace std;

int main() {

// normal pointers in cpp

int a = 23;
int *k = &a;

cout<<"The value at k "<<*k<<endl;
//deference is used for the show value at the pointer which is store
// cout<<k; //it gives addresss of the a

// cout<<&a; //gives the address of a


// int marks[] = {23, 56, 76, 34,56, 435, 7647};

// to make the pointer of array we use 
//in this *p stores only the address of first index element
// int *p = marks; // &marks  = wrong in case of array


// cout<<*++p<<endl;  //56
// cout<<*p++<<endl;  //56
// cout<<*p<<endl;    //76

// cout<<*p<<endl;
// cout<<*(p + 1)<<endl;
// cout<<*(p + 2)<<endl;  // for next element of array
// cout<<*(p + 3)<<endl;

return 0;
}
