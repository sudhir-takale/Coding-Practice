#include <iostream>
using namespace std;

int main()
{

    int a = 434;
    int *ptr = & a;  this is basic method

    int *ptr = new int(4345); // this is dynamically creating the memory
    cout <<(*ptr);

    // we can create the array dynamically by using the pointer

    float *array = new float[5]; // here we create the array of size 5

    array[0] = 245;
    cout << array[0];
    array[2] = 45;
    cout << array[0 + 1];
    delete array; // it will delete the entire array
    cout << array[2];
    return 0;
}