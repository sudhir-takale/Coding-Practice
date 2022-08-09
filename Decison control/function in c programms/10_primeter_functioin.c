#include<stdio.h>
  
int main(){
 
    int radius;
   float area,perimeter;

 printf("\\nEnter the radius of circle");
 scanf("%D",&radius);
 printf("\nThe area of circle is  %f",area);
 perimeter(&perimeter,radius);
 printf("\nThe area of circle is  %f"perimeter);
return 0;
 
}