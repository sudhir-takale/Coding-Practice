#include<stdio.h>
int expo(int n){
    //here n is the power
    if (n==0)
    {
        return 1;
    }
    int ans=2*expo(n-1); //you can change the value of 2 0r any other
    return ans;
    
}  
int main(){
 
int a,k;
printf("Enter the input :\n");
scanf("%d",&a);
// k=expo(a);
// printf("%d",k);
printf("%d",expo(a));
 
return 0;
 
}