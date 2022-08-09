#include<stdio.h>
  int multiply(int ,int );
int main(){
 
 int a=12,b=12,v;
v= multiply(a,b);
 printf("\nThe multiplication of two numbers  is %d",v);
 
return 0;
 
}
int multiply(int y,int z){
    int result=y*z;
    return result;
}