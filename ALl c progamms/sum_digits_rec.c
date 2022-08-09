#include<stdio.h>
 //1234=10

//  23423%10==3

 int sum_digit(int n){
     if (n==0)
     {
         return 0; /* code */
     }
     int last_digit=n%10;
     int remaining = n/10;
    //  printf("%d %d \n", remaining ,  last_digit);
     return sum_digit(remaining) + last_digit;
     
 } 
int main(){
 
 int a;
 printf("Enter the input\n");
 scanf("%d",&a);
 printf("%d",sum_digit(a));
 
return 0;
 
}