// #include <stdio.h>
// void main()
// {

//     int a, b, sum = 0, r, temp;
//     printf("Enter the number");
//     scanf("%d", &a);
//     temp = a;
//     while (a!= 0)
//     {

//         r = a % 10;
//         sum = (sum * 10) + r;
//         a = a / 10;
//     }

//     if (temp == sum)
//     {
//         printf("true");
//     }
//     else
//     {
//         printf("false");
//     }

//     getchar();
// }

#include <stdio.h>

int sorted(int a[], int l, int h, int key)
{

    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (a[mid] == key)
        {
         printf("%d ",a[mid]);
        }
        if (a[mid] < key)
        {
            l = mid + 1;
        }
        else{
       
            h = mid - 1;
        }
    }
    printf("\nnot found");
}
int main()
{

    int a[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int l = 0;
    int h = sizeof(a) / sizeof(int);
    int key = 17;
    sorted(a, l, h, key);
    return 0;
}