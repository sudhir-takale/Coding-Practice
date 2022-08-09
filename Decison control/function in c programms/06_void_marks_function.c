#include<stdio.h>
  int  display(int a);
int main(){
 int i,c;
 int marks[5];
 printf("\nEnter the marks of students ");

 for (i=0;i<5;i++){
     scanf("%d",&marks[i]);
     c=display(marks[i]);
     
 }
 printf("\nThe marks of students is %d", c,marks[i]);

 return 0;
 
}
int  display(int a){
    int result;
    printf("\t\n",a);
    return result;
}