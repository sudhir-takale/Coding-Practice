#include<stdio.h>
  
int main(){
 
 int  p,n,i=1;
 float r,si;
for ( i = 1; i < 4; i++)
{
    printf("\nEnter the values of p,r,n :");
    scanf("%d%d%f",&p,&n,&r);
    si=(p*r*n)/100;
    printf("\nThe simple interest = Rs %f",si);

}

return 0;
 
}