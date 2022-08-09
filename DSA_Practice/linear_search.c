#include <stdio.h>
int linear(int arr[], int size, int ele)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == ele)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {
        123,
        6,
        456,
        78,
        45,
        8,
        4,
        6,
        3,
        87,
        346,
        3245,
    };
    int size = sizeof(arr) / sizeof(int); // this line will give you the size of the array
    int element = 78;
    int searchindex = linear(arr, size, element);

    printf("The elment %d is found at index %d\n", element, searchindex);

    return 0;
}