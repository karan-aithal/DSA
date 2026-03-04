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

// 560. Subarray Sum Equals K
// Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.

// A subarray is a contiguous non-empty sequence of elements within an array.

// Example 1:

// Input: nums = [1,1,1], k = 2
// Output: 2
// Example 2:

// Input: nums = [1,2,3], k = 3
// Output: 2

int subarraySum(vector<int> nums, int k)
{
    // unordered_map<int, int> Prefixsum{{0, 1}}; // Prefix Sum - key , Frequency - value
    // use above and remove sum == k condition and add count of prefix sum in the map to count when target is found in the map
    unordered_map<int, int> Prefixsum;
    int sum = 0;                // running prefix sum
    int target = 0;
    int count = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        //  Build prefixSum on the fly
        sum += nums[i];
        target = sum - k;

        if (sum == k) // if while prefix is equal to k
        {
            count++;
        }

        // If we've seen prefix 'target' before, add its count

        if (Prefixsum.find(target) != Prefixsum.end()) // if found then add the frequency of that prefix sum to count
        {
            count += Prefixsum[target]->second;
        }

        // if not found then add it to the map with frequency 1
        if (Prefixsum.find(sum) == Prefixsum.end())
        {
            Prefixsum[sum] = 0;
        }
        Prefixsum[sum]++;

        // if (m.find(sum) == m.end())
        // {
        //     m[sum]++;
        // }
        //         ❌ Incorrect.
        //
        // This only increments when the key is missing.
        // If the key already exists, you don’t increment, so the count never increases after the first time. That breaks the frequency map logic.
    }
    return count;
}

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
    subarraySum(nums);

    return 0;
}

// unordered_map<int, int> prefixsum{{0, 1}};
// int count = 0;
// int sum = 0;

// for (int i = 0; i < nums.size(); i++)
// {
//     sum = sum + nums[i];
//     if (prefixsum.find(sum - k) != prefixsum.end())
//     {
//         count = count + prefixsum[sum - k];
//     }
//     prefixsum[sum]++;
// }
// return count;

// Same as (with a slight modification)
// https://leetcode.com/problems/contiguous-array/description/
// https://leetcode.com/problems/subarray-sum-equals-k/description/
// https://leetcode.com/problems/subarrays-with-k-different-integers/description/
// https://leetcode.com/problems/count-number-of-nice-subarrays/description/
// https://leetcode.com/problems/binary-subarrays-with-sum/description/
// https://leetcode.com/problems/subarray-product-less-than-k/description/
// https://leetcode.com/problems/count-subarrays-where-max-element-appears-at-least-k-times/description/

// Take an Example [3,4,7,-2,2,1,4,2] and k=7

// It's solution using 2 ptr approach will be: 4
// i.e. [3,4] , [7] , [7,-2,2] , [-2,2,1,4,2] , [1,4,2]

// It's solution using presum based map:
// [3,4] , [7] , [7,-2,2] , [-2,2,1,4,2], [2,1,4] , [1,4,2]

// Basically we are unable to count [2,1,4] using 2 ptr approach.

// Why so?
// Because while using 2 pointer approach, our assumption is that no subset of the set under consideration can form an answer.
// // This would be true if we didn't had -ve numbers.