#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
using namespace std;

// 2 pass approach
// 1st pass point to first zero element j -> 0
// 2nd pass from j+1 to end find non zero element and keep swapping with j
// TC: O(n)
// 2 pointers

void MoveZerosEnd(vector<int> nums)
{
    int j = 0;
    // 1st pass
    // find the first zero element and point j to it j -> 0
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 0)
        {
            j = i;
            break;
        }
        
    }

    // 2nd pass
    // from j+1 to end find non zero element and keep swapping with j
    for (int i = j + 1; i < nums.size(); i++)
    {
        if (nums[i] != 0)
        {
            swap(nums[i], nums[j]);
            j++;
        }
    }
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n; // Read a single integer from standard input

    vector<int> numbers;
    int result = 0;

    for (int i = 0; i < n; ++i)
    {
        int num;
        cin >> num;             // Read each integer
        numbers.push_back(num); // Add the read number to the vector
    }

    result = MoveZerosEnd(numbers);

    cout << result;

    return 0;
}