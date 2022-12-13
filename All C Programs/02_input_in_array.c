#include<stdio.h>
  
int main(){
 
 int i;
 int values[7];
 printf("\nEnter the five interger in array");
 for ( i = 0; i < 7; i++)
 {
    scanf("%d\n",&values[i]);
 }
 printf("\nYour entered integers are ...");
 for ( i = 0; i < 7; i++)
 {
    printf("\n%d",values[i]);
 }
 
return 0;
 
}