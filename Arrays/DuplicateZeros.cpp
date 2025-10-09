#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
using namespace std;

void DuplicateZerosArray(vector<int> &nums)
{

    // 1. Traverse the array using count() and count no.of zeros
    // 2. store count and add it to lenght of array
    // 3. Traverse array from end using 2 pointers and in place update the array elements
    // Note that elements beyond the length of the original array are not written.
    int n = nums.size();
    int cntZeros = 0;
    cntZeros = count(nums.begin(), nums.end(), 0);

    // 2 pointers
    int i = n - 1;                      // original array
    int j = nums.size() + cntZeros - 1; // extend for duplicates

    while (i >= 0) // traverse from end
    {
        // When you encounter a zero, you need to write two zeros: one for the original, one for the duplicate.
        // Writing the duplicate first and then the original ensures correct placement.

        if (nums[i] == 0)
        {
            if (j < n)
                nums[j] = 0; // duplicate zero
            j--;
            if (j < n)
                nums[j] = 0; // original zero
            j--;
        }
        else
        {
            if (j < n)
                nums[j] = nums[i]; // copy non-zero
            j--;
        }
        i--;
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        // Input for array ,number etc...

        int n = 0;
        cin >> n;

        vector<int> nums;

        for (int i = 0; i < n; i++)
            cin >> nums[i];

        DuplicateZerosArray(nums);
        // Call solve or simillar function with args

        return 0;
    }
}