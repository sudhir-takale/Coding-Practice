#include<stdio.h>
  int sum(int ,int);
int main(){
 
 int a,b,c;
 printf("\nEnter the values of a,b :");
 scanf("%d%d",&a,&b);
 c=sum(a,b);
 printf("\nThe addition of two numbers is %d",c);
return 0;
 
}
int sum(int x,int z){

    int add=x+z;
    return add;
}