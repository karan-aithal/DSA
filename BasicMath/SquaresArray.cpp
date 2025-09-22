#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
using namespace std;

vector<int> sortedSquares(vector<int> &nums)
{

    int LP = 0;
    int RP = nums.size() - 1;
    vector<int> res(nums.size(), 0);
    // three pointer

    for (int i = nums.size()-1; i > 0; i--) // place from the end asscending order
    {
        if (nums[LP] * nums[LP] > nums[RP] * nums[RP])
        {
            res[i] = nums[LP] * nums[LP];
            LP++;
        }
        else
        {
            res[i] = nums[RP] * nums[RP];
            RP--;
        }
    }

    return res;
    
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     nums[i] = nums[i] * nums[i];
    // }

    // for negative nums in a sorted array we need to sort again !!

    //  nums = {-4, -1 , 0 , 2 , 8 , 9}
    //  res = {16, 1, 0, 4, 64, 81}  ❌ Not Sorted
    //  res =  {0 ,1 ,4 , 16, 64, 81}  ✔ Correct

    // HOW to sort ???
    // Two pointer start and end
}

int main()
{
    // int arr[] = {};
    // int size = sizeof(arr) / sizeof(arr[0]);
    // LargestElementArray(arr, size);

    int n = 0;
    cin >> n;

    vector<int> nums;

    for (int i = 0; i < n; i++)
        cin >> nums[i];

    // int k ; cin << k;
    //  int x;
    //  cin >> x;
    sortedSquares(nums);
    // SearchElement(arr, size, x);

    // cout << "The array after removing duplicate elements is " << endl;
    // for (int i = 0; i < k; i++)
    // {
    //     cout << nums[i] << " ";
    // }

    return 0;
}