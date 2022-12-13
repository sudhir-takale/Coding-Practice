#include <stdio.h>

int returnmax(int arr[], int n)
{
    int max = 0;
    for (int i = 0; i < n; i++)

    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        /* code */
    }
    printf("Largest element :%d ", max);
    
}
int main()
{

    int arr[] = {45, 7, 23, 78, 4, 34, 5, 43, 78, 53, 67};
    int n = 11;
    int max = returnmax(arr, n);

    return 0;
}