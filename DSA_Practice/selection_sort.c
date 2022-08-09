#include <stdio.h>

void selectionSort(int *a , int n){
    for (int i = 0; i < (n - 1); i++)
    {
        int min = i;
        for (int j = (i + 1); j < n; j++) //checking is the next element is greater or not
        {

            if (a[min] > a[j])

            {
                min = j;
            }
        }
        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;
        
    }
    printf("\nSorted array is : ");
    printf("\n");
}
int main()
{

    int a[] = {5,9,1,3,7,4};
    int n = 6;
    
    pritnArray(a,n);
    selectionSort(a,n);
    pritnArray(a,n);
    

    return 0;
}
void pritnArray(int *a ,int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}