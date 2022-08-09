#include<stdio.h>
#include<math.h>
  int square(int );
int main(){
 
 int a;float area;
 printf("\nEnter the side of square :");
 scanf("%d",&a);
 area=square(a);
printf("\nThe area of square is :%f",area);
return 0;
 
}
int square(int b){

  int c;
  c=pow(b,2);
  return c;
}