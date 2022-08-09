#include<stdio.h>
  
int main(){
 
 int n,i,j,k=1;
 printf("\nHow many rows you want :");
 scanf("%d",&n);
 for(i=1;i<=n;i++){

     for(j=1;j<=i;j++){
         printf("%d",k++);//by changing k we can get the other patterns 
     }
         printf("\n");
 }
 
return 0;
 
}