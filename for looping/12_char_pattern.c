#include<stdio.h>
  
int main(){
 
 int n,i,j;char ch; ch='A';
 printf("\nEnter the value of rows");
 scanf( "%d",&n);
for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
        printf("%c",ch++); //change the value of in the printf 
    }
    printf("\n");
}
return 0;
 
}