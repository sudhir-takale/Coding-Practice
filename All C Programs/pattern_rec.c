#include<stdio.h>
void print_pattern(int n){
    if (n == 0)
    {
        return 0;
    }
    print_pattern(n - 1);
    for (int i = 0; i < n; i++)
    {
        printf(" %d ",i+1);
    }
    printf("\n");
} 
int main(){
 
 print_pattern(6);
 
return 0;
 
}