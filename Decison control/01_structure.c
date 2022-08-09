#include<stdio.h>
 struct book{
     
     char name[15];
    
     int pages;
     float price;
     char author[14];

 }book; 
int main(){
 printf("\nEnter the name of book  :");
 scanf("%s",&book.name[15]);
 printf("\nEnter the name of author of book :");
 scanf("%s", &book.author[14]);
  printf("\nEnter the  of pages of book :");
 scanf("%d", &book.pages);
printf("\nEnter the price of book  :");
 scanf("%f", &book.price);

     return 0;
}