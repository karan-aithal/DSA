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

// You are given an integer array nums and an integer k.
//  Your task is to find the maximum length of a contiguous subarray whose elements sum to exactly k.
// If no such subarray exists, return 0.

// A subarray is a contiguous sequence of elements within an array.
// For example, in the array [1, 2, 3, 4], some subarrays include [1, 2], [2, 3, 4], and [3], but [1, 3] is not a subarray

// control both expand and shrink of sliding window
//
// find Sum = k until then expand and shrink if lesser
// then along with that keep updating the MaxLen whenever sum = k

int maxSubArrayLen(vector<int> &nums, int k)
{
    unordered_map<int, int> prefixSum{{0, -1}};
    int maxLen = 0;
    int sum = 0;
    int target = 0;

    //     for (int r = 0; r < nums.size(); r++)
    //     {
    //         if (sum < k)
    //         {
    //             sum = sum + nums[r];
    //         }

    //         if (sum == k)
    //         {
    //             maxLen = max(maxLen, r - l + 1);
    //         }

    //         if (sum > k)
    //         {
    //             while (sum > k && l < r)
    //             {
    //                 sum = sum - nums[l];
    //                 l++;
    //             }

    //             // ABOVE IS NOT APPLICABLE BECAUSE WE CAN HAVE -VE NUMBERS IN THE ARRAY, SO WE CANNOT JUST SHRINK THE WINDOW UNTIL SUM > K,
    //             // BECAUSE IT MIGHT BE POSSIBLE THAT SUM BECOMES EQUAL TO K AFTER SHRINKING THE WINDOW, SO WE NEED TO CHECK FOR THAT AS WELL
    //             // SO WE USE A HASHMAP TO STORE THE PREFIX SUMS AND THEIR INDICES,

    //             // SO THAT WE CAN CHECK IF THERE IS A PREFIX SUM THAT EQUALS TO (CURRENT SUM - K), IF YES THEN WE CAN UPDATE THE MAXLEN
    //             // INVERSE OF CURRENT SUM - PREFIX SUM AT INDEX = K => PREFIX SUM = CURRENT SUM - K
    //             // EG :- [1 -1 5 -2 3] K = 3
    //             // PREFIX SUMS = [1, 0, 5, 3, 6]
    //             // CURRENT SUM
    //             // WHEN WE ARE AT INDEX 3 (VALUE = -2) CURRENT SUM = 3,
    //             // WE CHECK IF THERE IS A PREFIX SUM THAT EQUALS TO (CURRENT SUM - PREFIX SUM = K)
    //             //= 3 - 3 = 0 WRONG, 6 - 3 = 3 CORRECT
    //             // DIFF OF ANY 2 PREFIX SUMS = K, THEN THERE IS A SUBARRAY BETWEEN THOSE 2 INDICES THAT SUMS TO K
    //             // SO WE CHECK IF THERE IS A PREFIX SUM THAT EQUALS TO (CURRENT SUM - K),
    //             // IF YES THEN WE CAN UPDATE THE MAXLEN = MAX(MAXLEN, CURRENT INDEX - PREFIX SUM INDEX)
    //             // YES THERE IS AT INDEX 1, SO WE CAN UPDATE MAXLEN = MAX(MAXLEN, CURRENT INDEX - PREFIX SUM INDEX) = MAX(0, 3 - 1) = 2
    //         }
    //     }
    //     return maxLen;

    for (int r = 0; r < nums.size(); r++)
    {
        //    while you iterate the array, calculate prefix sum

        sum = sum + nums[r];
        target = sum - k;

        if (sum == k) // if prefix sum is equal to k then we can update maxLen = current index + 1
        {
            maxLen = max(maxLen, r + 1); // index + 1 = length  , as array is 0 indexed
        }
        // check if target is present in hashmap
        // difference of prefix sum and required sum = target in hashmap.find()

        if (prefixSum.find(target) != prefixSum.end()) // if target is found calculate maxLen and move left until target not
        {
            maxLen = max(r - prefixSum[target], maxLen); // R-L , r = current index, l = prefixSum[target];  //index of target in hashmap
        }
        else if (prefixSum.find(target) == prefixSum.end()) // if target not found add to hashmap the prefix sum with index so further targets can find it
        {
            prefixSum[sum] = r;
        }
    }
    return maxLen;
}

int main()
{
    fast_cin();
    ll t;
    // cin >> t;
    fast_cin();
    int n, k;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    cin >> k;

    int ans = maxSubArrayLen(nums, k);
    cout << ans << endl;
    return 0;
}