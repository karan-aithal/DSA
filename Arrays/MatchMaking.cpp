#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
using namespace std;

void MatchMaking(int N, int k, vector<int> nums)
{
    int arr[N] = {-1};     // initialize array to -1
    vector<int> unmatched; // dynamic array to store unmatched elements

    // ans {index of matched to each} {-1 -1 -1 -1 -1}
    // unmatched = {} // 9
    // up = 11
    // lw = 7
    // nums[i] = nums[0] = 9 [7,11]

    for (int i = 0; i < N; i++) // iterate
    {
        int up = nums[i] + k;
        int lw = nums[i] - k;

        for (int j = 0; j < unmatched.size(); j++)
        {
            int idx = unmatched[j]; // get first element
            if (nums[i] >= lw && nums[i] <= up) // within range [lw, up]
            {
                
                int prevnum = nums[idx];
                unmatched.push_back(prevnum); // add to unmatched
            }
        }
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
        int N, K;
        vector<int> nums;

        cin >> N; // no. of array elements

        for (int i = 0; i < N; i++)
        {
            cin >> nums[i];
        }

        cin >> K; // no of uncertainity + or  - for range

        MatchMaking(N, K, nums);
        // Call solve or simillar function with args

        return 0;
    }
}