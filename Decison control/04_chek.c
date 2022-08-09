#include<stdio.h>
  
int main(){
 
 char ch;
 printf("\nEnter the character  :");
 scanf("%c",&ch);
 if(ch>='A' && ch<='Z'){
     printf("\nEntered char is uppercase Alphabet");
 }
 else if (ch >= 'a' && ch <= 'z')
 {printf("\nEntered char is Lowercase Alphabet");}
else if(ch<=0 && ch>=9){
    printf("\nEntered char is digit ");
} else {
    printf("\nEntered char is Special Symbol");
}


      return 0;
 }