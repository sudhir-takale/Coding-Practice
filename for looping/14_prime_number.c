#include<stdio.h>
  
int main(){
 
 int n,i,prime=1;
 printf('\nEnter the number');
 scanf  ("%d",&n);
 for(i=2;i<=n/2;i++){
     if(n%i==0){
         prime=0;break;
     }
 }
 if(prime==1){
     printf("number is prime\n");
 }else{("\nNumber is not prime");}
return 0;
 
}