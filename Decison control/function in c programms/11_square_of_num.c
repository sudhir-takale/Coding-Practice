#include<stdio.h>
 #include<math.h>
 int square(int ); 
int main(){
 int n,squ;
 printf("\nEnter the value of N :");
 scanf("%d",&n);
 squ=square(n);
 printf("\nThe square  of  %d  is %d",n,squ);
return 0;
 
}
int square(int a){
    
       int  result= pow(a,2);
    return result;
}