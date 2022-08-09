#include<stdio.h>
int sayDigit(int n,char arr[]) 
// ip = 123
// o p = one two three
int sayDigit(int n, char arr[]){

if (n == 0)
{
return;    /* code */
}
int digit = n % 10;
n = n / 10;

sayDigit(n, arr);
printf("%d", arr[digit]);

}

int main(){
 
 int n = 123;
char arr[] = {"zero","one","two","three", "four","five" ,"six" ,"seven","eight","nine" };

sayDigit(n ,arr);
 
return 0;
 
}