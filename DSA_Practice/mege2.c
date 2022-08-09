
// #include <stdio.h>

// void printArray(int *a, int n)
// {

//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", a[i]);
//     }
//     printf("\n");
// }

// void merge(int *a, int mid, int l, int r)
// {

//     int i, j, k;
//     int b[10];

//     i = l;
//     j = mid + 1;
//     k = l;

//     while (i <= mid && j <= r)
//     {
//         if (a[i] < a[j])
//         {
//             b[k] = a[i];
//             i++;
//             k++;
//         }
//         else
//         {
//             b[k] = a[j];
//             k++;
//             j++;
//         }
//     }
//     while (i <= mid)
//     {
//         b[k] = a[i];
//         k++;
//         i++;
//     }

//     while (j <= r)
//     {
//         b[k] = a[j];
//         k++;
//         j++;
//     }
//     for (int i = l; i < r; i++)
//     {
//         a[i] = b[i];
//     }
// }
// void mergeSort(int *a, int l, int r)
// {
//     int mid;

//         if (l < r)
//     {
//         mid = (l + r) / 2;
//         mergeSort(a, l, mid);
//         mergeSort(a, mid + 1, r);
//         merge(a, mid, l, r);
//     }
// }

// int main()
// {

//     int a[] = {2,3,4,6,5};
//     int n = 5;
//     printArray(a, n);
//     mergeSort(a, 0, 4);
//     printArray(a, n);

//     return 0;
// }

#include <stdio.h>

#define max 10

int a[11] = {10, 14, 19, 26, 27, 31, 33, 35, 42, 44, 0};
int b[10];

void merging(int low, int mid, int high)
{
    int l1, l2, i;

    for (l1 = low, l2 = mid + 1, i = low; l1 <= mid && l2 <= high; i++)
    {
        if (a[l1] <= a[l2])
            b[i] = a[l1++];
        else
            b[i] = a[l2++];
    }

    while (l1 <= mid)
        b[i++] = a[l1++];

    while (l2 <= high)
        b[i++] = a[l2++];

    for (i = low; i <= high; i++)
        a[i] = b[i];
}

void sort(int low, int high)
{
    int mid;

    if (low < high)
    {
        mid = (low + high) / 2;
        sort(low, mid);
        sort(mid + 1, high);
        merging(low, mid, high);
    }
    else
    {
        return;
    }
}

int main()
{
    int i;

    printf("List before sorting\n");

    for (i = 0; i <= max; i++)
        printf("%d ", a[i]);

    sort(0, max);

    printf("\nList after sorting\n");

    for (i = 0; i <= max; i++)
        printf("%d ", a[i]);
}