// #include <stdio.h>
// int binarySearch(int arr[], int size, int element)
// {
//     int mid, low, high;
//     low = 0;
//     high = size - 1;
//     // searching start
//     while (low <= high)
//     { // the element not in the array ..until high low converges
//         mid = (low + high) / 2;

//         if (arr[mid] == element)
//         {
//             return mid;
//         }
//         if (arr[mid] < element)
//         {
//             low = mid + 1; // mid + 1 beacause of we know that at the mid we dont have the element..already know that
//         }
//         else
//         {
//             //    (arr[mid] > element)  //if element is greater than element
//             high = mid - 1;
//         }
//     }
//     // searching end
//     return  -1;
// }
// int main()
// {

//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 12, 23, 45, 56, 89};

//     int size = sizeof(arr) / sizeof(int); // this line will give you the size of the array
//     int element = 1332;
//     int searchindex = binarySearch(arr, size, element);

//     printf("The elment %d is found at index %d\n", element, searchindex);

//     return 0;
// }


#include<stdio.h>
  
int binarySearch(int a[], int size, int element){

int low = 0;
int high = size - 1;

while (low <= high)
{
    int mid = (low + high)/2;

    if (a[mid] == element)
    {
        return mid;
    }
    
    if ( a[mid] < element)
    {
        low = mid + 1;
    }
    else{
        high = mid - 1;
    }
    
}
return -1;

}



int main(){
 
int a[] = {1,2,3,4,5,6,7,34,89};
int size = 9;
int element = 34;
int search =  binarySearch(a, size, element);
printf("\nThe element is at : %d location",search);
 
return 0;
 
}