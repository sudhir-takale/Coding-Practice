#include <bits/stdc++.h>
using namespace std;

int linearSearch(int nums[], int numsSize, int target)
{

    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] == target)
        {
            // cout << "The element found at index " << i << endl;
            return i;
        }

        // cout << "The element not found in array " << endl;
        
    }
    return -1;
}

int main()
{

    int nums[] = {12, 6, 78, 56, 8, 34, 67, 34, 67, 34, 876, 324};
    int numsSize = 12;
    int target;
    cout << "Enter which element you want to search : " << endl;
    cin >> target;
    cout<<linearSearch(nums, numsSize, target);
    // cout<<k<<endl;
            

    return 0;
}

