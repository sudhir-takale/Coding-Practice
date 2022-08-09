#include<stdio.h>
int natural(int n){
    int num=1;
    if (n==0)
    {
        return 1;
    }
    printf("%d\n",n);
    int c = natural(n - 1);
    return c;
    

}
int main(){
 int num;
 printf("\n How many numbers  you want :");
 scanf("%d",&num);
 natural(num);

 
return 0;
 
}