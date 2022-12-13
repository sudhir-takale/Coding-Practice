#include <stdio.h>
//  1 hello
//  2 hello
//  3 helllo
//  ...
//   ....
// n-1 hello  upto this the function will print the hello world n - 1 times
// n   hello

int print_str(int num)
{
    if (num == 0)
    {
        return;
    }
    print(num - 1);
    int k = printf(" HEllO ");
    return k;
}
int main()
{

    int times;
    printf("\n Enter the input according to how many times you want to print it :");
    scanf("%d", &times);

    print_str(times);

    return 0;
}