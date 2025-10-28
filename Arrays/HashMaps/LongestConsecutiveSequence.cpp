#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
using namespace std;

int longestConsecutiveSequence(vector<int> &nums)
{
    // store in hash map
    unordered_map<int, bool> numMap;

    for (int num : nums)
    {
        numMap[num] = true;
    }
    int maxLen = 0;

    // map::find() -- it returns an iterator to the element; otherwise, it returns map::end()
    // map::count() --  it returns 1 if the key exists and 0 if it does not.

    for (int n : nums)
    {
        // check if n-1 exists in map // previous element found - cannot be starting point
        if (numMap.count(n - 1)) // or use count() method
        {
            numMap[n] = false; // not a starting point
        }
        else
            int res = 1;
        {
            // is a starting point
            while (numMap.count(n + res))
            {
                res++;
            }

            maxLen = max(maxLen, res);
        }
    }

    //  unordered_map<int, int> mp;
    //     int res = 0;

    //     for (int num : nums) {
    //         if (!mp[num]) {

    //             mp[num] = mp[num - 1] + mp[num + 1] + 1;  // checks for left and right sequences if any , adds 1 for current number
    //              calculates the length of the consecutive sequence
    //      mp[num - 1]: length of the sequence ending at num - 1

    //      mp[num + 1]: length of the sequence starting at num + 1

    //      + 1: adds num itself to the total length


    //             mp[num - mp[num - 1]] = mp[num];
    //             mp[num + mp[num + 1]] = mp[num];
    //             res = max(res, mp[num]);
    //         }
    //     }
    //     return res;
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

        longestConsecutiveSequence();
        // Call solve or simillar function with args

        return 0;
    }
}