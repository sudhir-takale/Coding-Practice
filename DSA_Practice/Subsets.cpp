#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void solve(vector<vector<int>> nums, vector<vector<int>> &ans, int index, vector<vector<int>> output)
{
    if (index >= nums.size())
    {
        ans.push_back(output);
        return;
    }
    solve(nums, ans, index + 1, output);
    int element = nums[index];
    output.push_back(element);
    solve(nums, ans, index + 1, output);
}

vector<vector<int>> getSubsets(vector<vector<int>> nums)
{
    vector<vector<int>> ans;
    vector<vector<int>> output;
    int index = 0;
    solve(nums, ans, index, output);
    return ans;
}

int main()
{

    vector<vector<int>> nums;
    nums.push_back({1, 2, 3});
   
    
    return 0;
}