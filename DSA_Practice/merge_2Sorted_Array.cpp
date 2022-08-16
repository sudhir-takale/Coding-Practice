#include <iostream>
using namespace std;

int *arr = new int[14];
void mergerArrays(int a[], int b[], int n1, int n2)
{
    
    int i = 0;
    int j = 0;
    int  k = 0;

    while (i <= n1 && j <= n2)
    {
        if (a[i] > b[j])
        {
            arr[k++] = b[j++];
           
        }
        else
            arr[k++] = a[i++];
            cout << arr[k];
    } 

    while (i <= n1)
    {
        arr[k++] = a[i++];
    }
    while (j <= n2)
    {
        arr[k++] = b[j++];
    }
}

int main()
{

    int a[] = {19, 5, 31, 7, 3, 6};
    int b[] = {9, 0, 23, 12, 34,  56};
    int n1 = 6;
    int n2 = 6;
    mergerArrays(a, b  );
    for (int i = 0; i < 14; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}