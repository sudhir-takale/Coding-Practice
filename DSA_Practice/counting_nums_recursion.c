#include <stdio.h>

int print(int n)
{

    if (n == 0)

    {
        return 0;
    }
    printf("%d \n", n); // you can make priting statement in ascending ot in descending order by changing the head and tail recusrion postion
    print(n - 1);
}
int main()
{

    int n;
    printf("\nenter the value of n");
    scanf("%d", &n);
    printf("\n %d", print(n));

    return 0;
}