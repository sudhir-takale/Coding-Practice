#include <stdio.h>

// void printArray(int *a, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", a[i]);
//     }
//     printf("\n");

// }
int bubbleSort(int *a, int n)
{
    int temp;
     for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; i < n - 1 - i; i++) // for number of pass
        {
            if (a[j] > a[j + 1])
            {
                 temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
       
        }
        
    }



}

int main()
{

    int a[] = {5, 3, 7, 2, 56, 9, 7, 12};
    int n = 8;
    // printArray(a, n); // before sorting the array
     bubbleSort(a, n);
    //  printArray(a,n);
     

    return 0;
}