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

// Product of Array Except Self
// store suffix Product and prefix Product
// for each index multiply prefix and suffix product to get result
// exclude self

void ProductofArray(vector<int> nums)
{
    vector<int> prefixProduct; // empty vector
    vector<int> suffixProduct; // empty vector
    int n = nums.size();

    // nums = {2, 3, 4, 5}
    // prefixProduct = {2, 6, 24, 120} including self
    // prefixProduct = {1, 2, 6, 24} except self

    // including self
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     prefixProduct[i] = prefixProduct[i-1] * nums[i];
    // }

    // except self
    prefixProduct[0] = 1; // intitalize first element for prefix as first element itself
    // no elements before -> 1
    // prefixProduct = {1, 2, 6, 24} except self
    for (int i = 1; i < nums.size(); i++)
    {
        prefixProduct[i] = prefixProduct[i - 1] * nums[i - 1]; // current = previousstoredPrefix * previous
    }

    // suffixProduct[n-1] = nums[n-1]; // intitalize last element for suffix as last element itself

    // nums = {2, 3, 4, 5}
    // suffixProduct = {120, 60, 20, 5}
    // suffixProduct = {60, 20, 5, 1} except self

    suffixProduct[n - 1] = 1; // intitalize last element for suffix as 1
    // no elements after -> 1

    for (int i = n - 2; i > 0; i++)
    {
        suffixProduct[i] = suffixProduct[i + 1] * nums[i + 1]; // current = nextstoredSuffix * current
    }



    // Product of Array except self
     // nums = {2, 3, 4, 5}
     // res = {60, 40, 30, 24}
    vector<int> result(n, 0);

    for (int i = 0; i < n; i++)
    {
        // {i = 0, prefix = 1, suffix = 60} -> 60 }
        // {i = 1, prefix = 2, suffix = 20} -> 40 }
        // {i = 2, prefix = 6, suffix = 5} -> 30 }
        // {i = 3, prefix = 24, suffix = 1} -> 24 }
        result[i] = prefixProduct[i] * suffixProduct[i];

    }

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
    ProductofArray(nums);

    return 0;
}