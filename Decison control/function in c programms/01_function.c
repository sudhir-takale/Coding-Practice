#include<stdio.h>
  int add(int a,int b);
int main(){
    int a = 5, b = 45;

    add( 5,45);

    return 0;}
int add(int a, int  b)
{ int c;
    c = a + b;
    printf("\nThe addition of two numbers ids %d", c);
}
