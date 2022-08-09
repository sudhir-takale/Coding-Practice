#include<stdio.h>
  
int main(){
 
 int a[] = {1,2,3,4,5,6,7,8,9};
 for (int i = 0; i < 10/2; i++)
 {
     int temp =  a[i];
     a[i] = a[10 -i ];
     a[10 - i] =  temp;

 }
 for (int k = 0; k <10; k++)
 {
     printf("%d ",a[k]);
 }
 
 
return 0;
 
}