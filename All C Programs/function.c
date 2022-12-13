#include <stdio.h>

void rectangle(int b)
{
    int a;
    printf("Enter the value of a ");
    scanf("%d", &a);
    int c = a * b;
    printf("%d ", c);
}

int main()
{

    rectangle(4);

    return 0;
}