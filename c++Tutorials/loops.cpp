#include<bits/stdc++.h>
using namespace std;

int main() {

   int marks[] = {12, 45, 56, 34, 23, 77};
   int mathMarks[4];
//    this is how we can create an array of different values

   cout<<"The marks of the "<<marks[0]<<endl;
   cout<<"The marks of the "<<marks[4]<<endl;
   cout<<"The marks of the "<<marks[2]<<endl;
   marks[4] = 111;
   cout<<marks[4]<<endl;

mathMarks[0] = 123;
mathMarks[1] = 12300;
mathMarks[2] = 1232;
mathMarks[3] = 12334;

cout<<mathMarks[0]<<endl;
    

for (int  i = 0; i < 4; i++)
{
    cout<<marks[i]<<endl;
}


return 0;
}