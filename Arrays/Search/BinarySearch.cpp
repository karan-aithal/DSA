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



// ARRAY MUST BE SORTED
// OR USE LINEAR SEARCH
//  Time Complexity -- O(log n)
void BinarySearch(vector<int> &arr, int target)
{
    int low = 0;
    int high = arr.size()-1;

    // But 4,100,000,000 exceeds Int32.MaxValue, causing integer overflow.

    // mid = (low + high) / 2
    // mid = (2,000,000,000 + 2,100,000,000) / 2
    // mid = 4,100,000,000 / 2


    // Safe formula
    // mid = low + (high - low) / 2
    // mid = 2,000,000,000 + (2,100,000,000 - 2,000,000,000) / 2

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
        {
            return mid; // Return the index if the target is found
        }
        if (arr[mid] < target)
        {
            low = mid + 1; // Search in the right half
        }
        else
        {
            high = mid - 1; // Search in the left half
        }
    }
    return -1;
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

    cin >>

        BinarySearch(nums, target);

    return 0;
}