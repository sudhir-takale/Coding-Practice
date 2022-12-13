#include<stdio.h>

int count(int n){
   
   if (n==0)
        return 0;
          
        printf("%d\n",n);

    return count(n-1)    ; //in this line we have apply the recursion
   


}


int main(){
 
int n;
printf("\nEnter the last digit you want  to run the program upto this number-->");
scanf("%d",&n);
count(n);


 
return 0;
 
}