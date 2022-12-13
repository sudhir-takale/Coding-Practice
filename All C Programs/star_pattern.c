#include<stdio.h>
void printPattern(int n){
    for (int i = 0; i < n; i++) //this for loop for rows of the pattern
    {
       for (int j = 0; j < i; j++)  //this loop for the col of the pattern
       {
         printf(" * ");
       }
       printf("\n");
    }
    
}
int main(){
 
 int n;
 scanf("%d",&n);
 printPattern(n);
 
return 0;

 
}