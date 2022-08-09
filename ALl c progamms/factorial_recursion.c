#include<stdio.h>

int factorial(int num){
    if (num==0 || num==1){
        return 1;
    }

    return num*factorial(num-1); //on this line we use the recursion statement



}
int main(){
 
 
int n;
printf("\nEnter the input :\n");
scanf("%d",&n);
printf("\nThe factorial of %d is %d",n,factorial(n));

 
return 0;
 
}