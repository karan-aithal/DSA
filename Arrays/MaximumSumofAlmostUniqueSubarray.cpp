#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
using namespace std;

long long maxSum(vector<int>& nums, int m, int k) {
    
}

int main() {
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
}