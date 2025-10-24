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
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())

// Usually Max Subarray is solved using a 2 pointer approach
// Sliding Window Approach
//
// 1. Initialize two pointers, left and right, both starting at the beginning of the array.
// 2. Initialize variables to keep track of the current sum and the maximum sum found so far.
// 3. Move the right pointer to expand the window and add the current element to the current sum.
// 4. If the current sum exceeds the maximum sum, update the maximum sum.
// 5. If the current sum becomes negative, move the left pointer to the place of right pointer to shrink the window and reset the current sum.
// 6. Repeat steps 3-5 until the right pointer reaches the end of the array.
// 7. Return the maximum sum found.

// for(i=0->n) for(j=i->n) ( for(i=0->n) sum+=arr[j] )))
// // Time Complexity: O(n^3)

// 1 pass -  prefix sum
//  create another array => prefix sum array
// prefix[0] = arr[0]
// prefix[i] = prefix[i-1] + arr[i] ....
// Time Complexity: O(n^2)
// 2 pass - max in prefix sum
// for(i=0->n) for(j=i->n) ( prefix sum sum+=arr[k] )))

//
//
//
//

int MaxSubarraySum(vector<int> &nums)
{
    int count = 0;
    int res = 0;
    int lp = 0, rp = 0;
    int Maxsum = 0;
    int sum = 0;

    
    while (rp <= nums.size())
    {
        sum = sum + nums[rp]; // keep adding next element to current sum using right pointer
        Maxsum = max(sum, Maxsum);
       
        // if negative start a new subarray
        if (sum < 0)
        {
            sum = 0;
            // sum = sum - nums[lp];
            lp = rp + 1;
        }

        rp++;       

    }


    // Kadane's Algorithm !!
    // dynamic programming technique
    for (int i = 0; i < nums.size(); i++)
    {
        // if sum < nums[i] , we store nums[i] and start a new array
        sum = max(nums[i], sum + nums[i]);

        // add current element to previous sum
        Maxsum = max(Maxsum, sum);
    }
    return res;
}

int main()
{
    // Fast I/O optimization: Untie C++ streams from C stdio and cin from cout
    // This can significantly improve performance for large inputs
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Read an integer representing the number of elements to process
    int n;
    cin >> n; // Read a single integer from standard input

    // Create a vector to store the elements
    vector<int> numbers;
    int result = 0;
    // Loop to read 'n' integers from a single line, separated by spaces
    // cin automatically handles space-separated input by default

    for (int i = 0; i < n; ++i)
    {
        int num;
        cin >> num;             // Read each integer
        numbers.push_back(num); // Add the read number to the vector
    }

    result = MaxSubarraySum(numbers);

    cout << result;

    return 0;
}