#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
using namespace std;

    // nums = {1, 2, 3, 5, 6};
    // missing number is 4

int FindMissingNumber(vector<int> nums)
{
    int n = nums.size();
    int sum = n * (n + 1) / 2; // Sum of first n natural numbers
    int actualSum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        actualSum += nums[i];
    }

    // the difference between the sum of n and the actual sum of array
    return sum - actualSum; // The missing number
}

// Using XOR
int FindMissingNumber(vector<int> nums)
{
    int n = nums.size();
    int x1 = 0; // XOR of all elements in the array
    int x2 = 0; // XOR of all numbers from 1 to n

    // 1^2^3^5^6

    for (int i = 0; i < n; i++)
    {
        x1 = x1 ^ nums[i];
    }

    // 1^2^3^4^5^6
    for (int i = 1; i <= n; i++)
    {
        x2 = x2 ^ i;
    }

    // 1^1^2^2^3^3 ^4^ 5^5^6^6 
    // 1^1 = 0
    // 2^2 = 0
    // 3^3 = 0
    // 5^5 = 0
    // 6^6 = 0
    // 0^0^0^0^0^4 = 4
    
    return x1 ^ x2; // The missing number
    
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

        cout << FindMissingNumber(nums);
        // Call solve or simillar function with args

        return 0;
    }
}