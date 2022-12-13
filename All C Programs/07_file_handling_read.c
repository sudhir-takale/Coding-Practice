#include<stdio.h>
 #include<conio.h>
 #include<stdlib.h>
 #include<string.h>

int main(){
 FILE*fp;
 char str[100];
 
 fp=fopen("generate.txt","r");
 
 fscanf(fp,"%s",str);
 printf("File contains ...");
 
 puts(str);
 fclose(fp);
 
 
return 0;
 
}