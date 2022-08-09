#include <stdio.h>

void merging(int a[], int low, int mid, int high);

    void printArray(int *A, int n)
{

    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
}
void sorting(int *a, int low, int high)
{

    int mid;
    mid = (low + high) / 2;

    if (low > high)
    {
        sorting(a, low, mid);
        sorting(a, mid + 1, high);
        merging(a,low,mid,high);
    }
}

void merging(int a[], int low, int mid, int high)
{

    int i, j, k;
    int b[10];

    i = low;
    j = mid + 1;
    k = low;
    while (i <= mid && j <= high)
    {
        if (a[i] > a[j])
        {
            b[k] = a[i];
            i++;
            k++;
        }
        else
        {
            b[k] = a[j];
            j++;
            k++;
        }
    }
        
            while (j <= high)
            {
                b[k] = a[i];
                i++;
                k++;
            }
        
        
            while (i <= mid)
            {
                b[k] = a[j];
                j++;
                k++;
            }

            for (int i = low; i < high; i++)
            {
                a[i] = b[i];
            }
        

}
    int main()
    {

        int a[] = {5, 6, 3, 7, 3, 9, 1, 8};
        int n = 8;
        printArray(a , n);
        sorting(a , 0, 7);
        printArray(a, n);

        return 0;
    }