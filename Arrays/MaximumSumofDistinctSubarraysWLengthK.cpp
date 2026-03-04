#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>

using namespace std;

typedef long long ll;
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())

// You are given an integer array nums and an integer k. Find the maximum subarray sum of all the subarrays of nums that meet the following conditions:

// The length of the subarray is k, and
// All the elements of the subarray are distinct.
// Return the maximum subarray sum of all the subarrays that meet the conditions. If no subarray meets the conditions, return 0.

// A subarray is a contiguous non-empty sequence of elements within an array.

// Example 1:

// Input: nums = [1,5,4,2,9,9,9], k = 3
// OP : 15

// HashSet , Fixed Sliding Window k ,
//
// X Set here give TLE - Time Limit Exceeded , because of the high constant factors of C++ STL set and unordered_set.
// 1. High Constant Factors (C++)
// std::set in C++ is implemented as a balanced binary search tree (usually a Red-Black Tree).

// first check size , then check if distinct ,
// if size is < k , then check if value is distinct , then add to sum and move forward
// if size is < k , and value is not distinct, then we remove l element from sum and move forward, l++, r++
// if size is > k, then we remove l and move forward, l++
// if size is == k, then we check if sum is greater than maxSum, if yes then update maxSum and move forward, l++, r++


long long maximumSubarraySum(vector<int> nums, int k)
{

    int l = 0;
    int r = 0;
    unordered_map<int, int> distinct;
    long long sum = 0;
    long long maxSum = 0;

    while (r < nums.size())
    {
        // if size of map == k , then calc max sum
        if (distinct.size() == k)
            maxSum = max(sum, maxSum);

        // Add the cuuren element at r to the map and sum
        distinct[nums[r]]++;
        sum = sum + nums[r];

        // if size of window r - l exceeds k -1 , then remove lth element from map and sum
        if (r - l > k - 1)
        {
            distinct[nums[l]]--;

            sum = sum - nums[l];

            if (distinct[nums[l]] == 0)
                distinct.erase(nums[l]);
            l++;
        }

        r++;
    }
    // recheck again as we miss the last window when r reaches the end of the array or
    // channge while condition to l < nums.size() along with r < nums.size()
    if (distinct.size() == k)
        maxSum = max(sum, maxSum);
    return maxSum;
}


int main()
{
    fast_cin();
    ll t;
    // cin >> t;
    fast_cin();
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int k;
    cin >> k;
    cout << maximumSubarraySum(nums, k) << endl;

    return 0;
}