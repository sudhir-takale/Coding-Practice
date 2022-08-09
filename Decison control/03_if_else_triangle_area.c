#include<stdio.h>
  
int main(){
 float a,b,c,area,s;
 printf("Enter the sides  of triangle==");
 scanf("%f%f%f",&a,&b,&c);
 s=(a+b+c)/2;
 area=sqrt(s+(s-a)*(s-b)*(s-c));
 if ((a==b)&&(b==c))
 {
    printf("\nThe triangle is equilateral Triangle");
 }
 else if ((a==b)||(b==c)||(c==a))
 {
    printf("\nThe triangle is Isosceles Triangle");
 }
 else if ((a!=b)||(b!=c)||(c!=a))
 {
    printf("\n THE triangle is Scalene");

 }else {
     printf("\ndata error");
 }
 printf("\n The area of triangle is %f",area);
 
 
return 0;
}