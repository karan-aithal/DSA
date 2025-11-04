#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
using namespace std;


// 3 Pointer Approach
// left , right and current pointer

vector < int > 3Sum(vector<int> &nums)
{

    int n = nums.size();
    vector<vector<int>> res;

    int l = 0;
    int r = n - 1;
    sort(nums.begin(), nums.end());

    // Fixes one number (nums[i]) and uses two pointers (left, right) to find pairs that sum to -nums[i].
    for (int i = 0; i < n; i++)
    {
        // # Skip duplicate values for the first number
        if (i > 0 && nums[i] == nums[i - 1])
            continue;

        while (l < r)
        {
            if (nums[l] + nums[r] == -nums[i]) // Find the 2 sum equal to -nums[i]
            {
                res.push_back({nums[i], nums[l], nums[r]});

                // after adding a valid triplet, move the pointers l and r  to skip duplicates
                // # Skip duplicates for the second number
                while (l < r && nums[l] == nums[l + 1])
                    l++; // Skip duplicates by checking next element is same -- as it is already sorted

                //   # Skip duplicates for the third number
                while (l < r && nums[r] == nums[r - 1])
                    r--; // Skip duplicates by checking previous element is same -- as it is already sorted

                // Move both pointers inward after finding a valid triplet
                l++;
                r--;
            }

            // sorted array , therefore move left pointer to next to increase sum
            else if (nums[l] + nums[r] < -nums[i])
            {
                l++;
            }
            // sorted array , therefore move right pointer to previous to decrease sum
            else if (nums[l] + nums[r] > -nums[i])
            {
                r--;
            }
        }
        // skip duplicates for the first element of the triplet
        l = i + 1;
        r = n - 1;
    }
    return res;
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

        3Sum();
        // Call solve or simillar function with args

        return 0;
    }
}