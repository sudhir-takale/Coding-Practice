#include<stdio.h>
  
int main(){
 int a ,b,c,d,e,per;
 printf("Enter thew marks of students :");
 scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
 per=(a+b+c+d+e)/5;
 printf("\nThe Percentage of five subject is  %d",per);
 if (per>=85&&per<=100)
 {
    printf("\nYour Grade is A and marks are %d",per);
 }
 else if(per>=65){
     printf("\nYour grade is B and marks is %d",per);
 }
 else if(per>=55){
     printf("\nYour Grade is C and marks are %d",per);
 }
 else{
     printf("\nYou are Fail");
 }
 
return 0;
}