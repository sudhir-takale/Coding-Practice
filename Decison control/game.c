#include<stdio.h>
 #include<stdlib.h>
 #include<time.h> 
int main(){
 int number,guess,nguesses=1;
 srand(time(0));
 number=rand()%100+1;
 //printf("\nThe number is %d",number);
 do{

     printf("Guess the Number between 1 to 100\n");
     scanf("%d",&guess);
     
     if (guess>number)
     {
         printf("\nLower number Please !");
     }
     else if (guess<number)
     {
        printf("\nHigher number please !");
     }
     else{
         printf("You Guessed it in %d Atttempts\n",nguesses);
     }
     nguesses++;
 }while(guess!=number);
return 0;
}