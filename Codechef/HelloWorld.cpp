#include <iostream>
using namespace std;



void fibo(int n){

 int temp = n;
 
 int rem, rev = 0;
 int t = n;
  while(n > 0){


   rem = n %10;
   rev = rev*10 + rem;
   n = n/10;
 }
  if(rev == temp){
  	cout << n << "Given number is palindrome" <<endl;
  }
 else{
 	fibo(t+1);
 }

}


int main(){


     fibo(21);

	return 0;
}