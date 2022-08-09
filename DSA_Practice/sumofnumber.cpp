#include<bits/stdc++.h>
using namespace std;

void printSum(int i, int sum){

    if(i < 1){
        cout << sum << endl;
        return ;
    }
    printSum(i - 1, sum + i);



}


int main() {

    printSum(4, 0);

    return 0;
}