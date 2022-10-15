#include <stdio.h>
int main()
{
    int a = 0, b = 0, c = 1;
    int num = 12, i, temp, e1, e2;
    // scanf("%d", &num);
    if (num == 1)
    {
        printf("0");
    }
    else if (num == 2)
    {
        printf("0");
    }
    else if (num == 3)
    {
        printf("1");
    }
    else
    {
        for (i = 1; i < num - 2; i++)
        {
            temp = a + b + c;
            e1 = c;
            e2 = b;
            c = temp;
            b = e1;
            a = e2;
        }
        printf("%d", temp);
    }
    return 0;
}