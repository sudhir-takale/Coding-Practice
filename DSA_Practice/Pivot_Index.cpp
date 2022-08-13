#include <iostream>
using namespace std;

int pivotIndex(int nums[], int n)
{

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + nums[i];
    }
    int lsum = 0;
    int rsum = sum;
    for (int j = 0; j < n; j++)
    {

        rsum = rsum - nums[j];

        if (rsum == lsum)
        {
            return j;
        }

        lsum = lsum + nums[j];
    }

    return -1;
}

int main()
{

    int a[] = {1,  6};
    int n = 2;

    cout << "The pivot index is  " << pivotIndex(a, n) << endl;

    return 0;
}