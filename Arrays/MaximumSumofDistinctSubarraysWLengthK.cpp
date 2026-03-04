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
// Set here give TLE - Time Limit Exceeded , because of the high constant factors of C++ STL set and unordered_set.
// 1. High Constant Factors (C++)
// std::set in C++ is implemented as a balanced binary search tree (usually a Red-Black Tree). 


void maximumSubarraySum(vector<int> nums, int k)
{

    int l = 0;
    int r = 0;
    unordered_set<int> distinct;
    long long sum = 0;
    long long maxSum = 0;

    while (r - l < k)
    {
        // if the element at r is not int set we add it to the set and add it to the sum and move r forward
        if (distinct.find(nums[r] == distinct.end()))
        {
            distanct.insert(nums[r])
            sum = sum + nums[r];
            r++;
            
        }
    }
    else // if window size is > k
    {
        sum = sum - nums[l]; // remove the element at l 
        distinct.erase(nums[l]); // remove the element at l from the set
        l++;
    }

    // first check size , then check if distinct , 
    // if size is < k , then check if value is distinct , then add to sum and move forward
    // if size is < k , and value is not distinct, then we remove l element from sum and move forward, l++, r++
    // if size is > k, then we remove l and move forward, l++
    // if size is == k, then we check if sum is greater than maxSum, if yes then update maxSum and move forward, l++, r++

int main()
{
    fast_cin();
    ll t;
    cin >> t;
    fast_cin();
    int n;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int k;
    cin >> k;
    maximumSubarraySum(nums, k);

    return 0;
}