#include <iostream>
using namespace std;

void merge(int arr[], int s, int e)
{
  int mid = (s + e) / 2;
  int n1 = mid - s + 1;
  int n2 = e - mid;

  int first[n1];
  int second[n2];
  // int m = s;
  for (int i = 0; i < n1; i++)
  {
    first[i] = arr[s +i];
  }
  // int z = mid + 1;
  for (int i = 0; i < n2; i++)
  {
    second[i] = arr[mid+1 +i];
  }

  int i = 0;
  int j = 0;
  int k = s;  // as the s pointing to the 1st index of main array so we have to initialize it with s only.

  while (i < n1 && j < n2)
  {
    if (first[i] < second[j])
    {
      arr[k++] = first[i++];
    }
    else
    {
      arr[k++] = second[j++];
    }
  }

  while (i < n1)
  {
    arr[k++] = first[i++];
  }

  while (j < n2)
  {
    arr[k++] = second[j++];
  }
}

void mergeSort(int arr[], int s, int e)
{

  if (s >= e)
  {
    return;
  }
  int mid = (s + e) / 2;

  mergeSort(arr, s, mid);
  mergeSort(arr, mid + 1, e);
  merge(arr, s, e);
}
void printArray(int arr[], int size){

  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main()
{

  int arr[] = {3, 5, 7, 3, 4, 2, 0};
  int size = 7;
  printArray(arr, size);
  mergeSort(arr, 0, size );
  printArray(arr, size);
  

  return 0;
}