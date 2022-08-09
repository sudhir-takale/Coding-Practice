#include<stdio.h>
  
int main(){
 int num; int a,b;
 printf("\nEnter two numbers :");
 scanf("%d%d",&a,&b);
 printf("\n 1 for Adddition \n 2 for Multiplication\n 3 for Substraction \n 4 for Division");
 printf("\nEnter you choice According to what you want to Perform Operation :");
 scanf(" %d",&num);
switch (num)
{
case 1:
    printf("\n The Sum of two NUmbers is  ==%d",a+b);
    break;
case 2:
printf("\n The substraction  of two NUmbers is  == %d",a-b);
    break;
case 3:
    printf("\n The Multiplication of two NUmbers is == %d ",a*b);
    break;
case 4:
    printf("\n The  Division of two NUmbers is ==%f ",a%b);
    break;
default:printf("\n Your Choice Is wrong :");
    break;
}
return 0;
}