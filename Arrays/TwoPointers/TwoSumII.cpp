#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
using namespace std;

// 1. Two Pointers Approach
vector<int,int> TwoSumII(vector<int> nums, int target) {  // returns i1 and i2
    // nums is ascending ordered array
    // x1 + x2 = target
    // if sum > target , decrease right pointer pointing to  big number
    // if sum < target , increase left pointer pointing to small number

    int l=0;
    int r= nums.size() -1 ;
    int maxSum = 0;

    while (l<r)
    {
        int sum = nums[l] + nums[r] ;
        if ( sum > target )
        {
            r--;
        }
        else if ( sum < target )
        {
            l++;
        }
        else 
        {
            return {l+1 , r+1} ; // 1-based indexing
        }        
    }
     return {};

}

// 2. HashMap Approach
vector<int,int> TwoSumII(vector<int>& nums, int target) {

    unordered_map <int , int > hmap;
    // leave breadcrumbs for further elements to find

    for (int i = 0; i < nums.size(); i++)
    {
        int diff = target - nums[i];
        if(hmap.count(diff)) // if diff found in map return diff index and current index
        {
            return {hmap[diff], i+1}; // 1-based indexing
        }
        // else store the current element for future elements to find 
        // key - number , value - index
        hmap[nums[i]] = i+1;
    }
    


}


int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;     cin >> t;
    while (t--)
    {
        // Input for array ,number etc...
    
    int n = 0;
    cin >> n;
    
     vector<int> nums;
    
     for (int i = 0; i < n; i++) 
        cin >> nums[i];
    
        solve();
        // Call solve or simillar function with args

        return 0;
    }
}