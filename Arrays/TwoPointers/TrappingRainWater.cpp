#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
using namespace std;

//  [0,1,0,2,1,0,1,3,2,1,2,1]

// -------------------------------------------------
// | 0 | 1 | 0 | 2 | 1 | 0 | 1 | 3 | 2 | 1 | 2 | 1 |  <-- height [i]
// -------------------------------------------------

// -------------------------------------------------
// | 0 | 0 | 1 | 1 | 2 | 2 | 2 | 2 | 3 | 3 | 3 | 3 |  <-- max heights to left - prefix max array

// | 3 | 3 | 3 | 3 | 3 | 3 | 3 | 2 | 2 | 2 | 1 | 0 |  <-- max heights to right - suffix max array
// -------------------------------------------------

// -------------------------------------------------
// | 0 | 0 | 1 | 1 | 2 | 2 | 2 | 2 | 2 | 2 | 1 | 0 |  <-- min(maxLeft, maxRight)
// -------------------------------------------------

// Trappped Water at each index
//
// | 0 | 0 | 1 | 0 | 1 | 2 | 1 | 0 | 0 | 1 | 0 | 0 |  == [ 1 + 1 + 2 + 1 + 1 ] = 6 <-- min(maxLeft, maxRight) - height[i]
// -------------------------------------------------

//
//  [0,1,0,2,1,0,1,3,2,1,2,1]
//     lp                  rp
//  maxLeft = 0         maxRight = 1
//  [0                  ]

int trap(vector<int> &height)
{

    // check maxLeft > maxRight or maxRight > maxLeft
    // shift minimum pointer either lp or rp
    // store min (maxleft, maxright) - height[i]
    // before setting new maxLeft or maxRight
    // calculate water trapped at index lp or rp

    int lp = 0, rp = height.size() - 1;
    int maxLeft = height[lp], maxRight = height[rp];
    vector<int> waterTrapped(height.size(), 0);

    while (lp < rp)
    {
        // To trap water we need to find the smaller boundary height
        // Move the pointer pointing to the smaller boundary height to try and find a larger boundary height to maximize water trapped
        if (maxLeft < maxRight)
        {
            lp++;
            // Update max height from the left
            maxLeft = max(maxLeft, height[lp]);

            waterTrapped[lp] = max(0, min(maxLeft, maxRight) - height[lp]);
        }

        else if (maxRight > maxLeft)
        {
            rp--;
            // Update max height from the right
            maxLeft = max(maxLeft, height[lp]);

            // If the current bar is taller than both boundaries → trapped water = 0.
            // Water trapped can’t be negative — it should be 0 at this point., therefore max (0, ...)

            waterTrapped[rp] = max(0, min(maxLeft, maxRight) - height[rp]);
        }
    }

    // Sum up all trapped water
    for (int w : waterTrapped)
    {
        total += w;
    }
    return total;
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

        vector<int> heights;

        for (int i = 0; i < n; i++)
            cin >> nums[i];

        trap(vector<int> & heights)
            // Call solve or simillar function with args

            return 0;
    }
}