#include<stdio.h>
  int sum(int a,int b);
int main(){
 int a,b,result;
 printf("\nEnter the value of a,b ");
 scanf("%d%d",&a,&b);
 result=sum(a,b);
 printf("\nThe Addition of two numbers is %d",result);
return 0;
 
}
int sum(int a,int b){
  int result=a+b;
  return result;
}