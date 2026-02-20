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
    int ans[N] = {-1};     // initialize array to -1
    vector<int> unmatchedIndex; // dynamic array to store unmatched elements

    // Array of elements with Ranking of each person joined later
    // list of unmatched so to get the first person within range of ranking for
    // return an array of elements where each element is index of matched person or -1 if none
    // ans {index of matched to each} {-1 -1 -1 -1 -1}
    // unmatched = {} // 9
    // up = 11
    // lw = 7
    // nums[i] = nums[0] = 9 [7,11]
    // match with all previous available in unmatched

    // if no match found add to unmatched
    // [9, 6, 8, 3, 1]
    // K = 2
    // N = 5
    // unmatched = {0-9 ,1-6 } // store indices of unmatched players 

    // [-1, -1, -1, -1, -1]
    // ans = [3, -1, 1, 5, 4]

    for (int i = 0; i < N; i++) // iterate
    {
        int up = nums[i] + k;
        int lw = nums[i] - k;
        bool matched = false;

        for (int j = 0; j < unmatchedIndex.size(); j++)
        {
            int Index = unmatchedIndex[j]; // get index for first elements from unmatchedIndex

            // check if unmatchedIndex element within range of current nums[i]

            // nums[unmatchedIndex[j]] within range of nums[i] + k or nums[i] - k

            if (nums[Index] >= lw && nums[Index] <= up) // within range [lw, up] 
            {
                // cout << "Matched " << nums[i] << " with " << unmatched[j] << "\n";
                // remove from unmatched
                unmatchedIndex.erase(unmatchedIndex.begin() + j);

                ans[i] = Index + 1; // store matched index +1 (1-based indexing) j + 1
                ans[Index] = i + 1; // update matched index for previous unmatched person j = i+ 1
                // storing both matches indexes with each other in ans 
                
                // unmatched.push_back(prevnum); // add to unmatched
                //  if found match and remove from unmatched queue, and update matched indexes -1 within ans
                matched = true;
                break; // FIFO Prio -- break after first match
            }

            if(!matched)
            {
                unmatchedIndex.push_back(i); // add current Index to unmatchedIndices
                
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

