#include <stdio.h>
#include <conio.h>

int main()
{
    int i, arr[20], j, no;
    
    printf("Enter size of array: ");
    scanf("%d", &no);
    printf("Enter any %d elements in array: ", no);
    for (i = 0; i < no; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Duplicate elements are: ");
    for (i = 0; i < no; i++)
    { 
        for (j = i + 1; j < no; j++)
        {
            int count = 0;
            if (arr[i] == arr[j])
            { count++; 
                printf("\n %d ", arr[i]);
            }
        }
    }
    return 0;
}