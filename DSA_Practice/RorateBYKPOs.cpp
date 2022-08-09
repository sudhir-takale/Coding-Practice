#include <bits/stdc++.h>
using namespace std;
int[] rotateArray(int a[], int size);
void printArray(int a[], int n);

int main()
{

    int k[] = { 0};
    int a[] = {2, 6, 8, 45};
    int size = 4;
    k = rotateArray(a, size);
    printArray(k, size);

    return 0;
}

void printArray(int a[], int n)
{
   for (int  i = 0; i < n; i++)
   {
    cout << a[i] << " ";
   }
   
}

int[] rotateArray(int a[], int size)
{
    int b[4];
    int k = 2;
    for (int i = 0; i < size; i++)
    {
        int c = (i + k) % size;
        b[c] = a[i];
    }
    return b;
}