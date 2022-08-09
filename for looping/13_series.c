#include<stdio.h>
  
int main(){
 
 int i,s=1,n;
 printf("\nEnter the length of series :");
 scanf("%d",&n);
 for(i=1;i<=n;i++,s+2){
     printf("%d",s);
 }
 
return 0;
 
}