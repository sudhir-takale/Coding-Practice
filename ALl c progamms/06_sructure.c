#include <stdio.h>
int countNumbers(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        printf("%d ", n); //use the printf function below the call to get ascending order output 
        return countNumbers(n - 2);
        
    }
}
int main()
{

    int n;
    printf("\nEnter the input :");
    scanf("%d", &n);

    countNumbers(n);
    return 0;
}