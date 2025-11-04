#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
using namespace std;

///                               @@@
///                               @@@
///,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,@@@,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,@@@,,,,,,///
///,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,@@@,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,@@@,,,,,,///
///,,,,,,,,,,,,,,@@@,,,,,,,,,,,,,,@@@,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,@@@,,,,,,///
///,,,,,,,,,,,,,,@@@,,,,,,,,,,,,,,@@@,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,@@@,,,,,,,,,,,,,,,@@@,,,,,,///
///,,,,,,,,,,,,,,@@@,,,,,@@@,,,,,,@@@,,,,,,,,,,,,,,,@@@,,,,,,,,,,,,,,@@@,,,,,,,,,,,,,,,@@@,,,,,,///
///,,,,,,,,,,,,,,@@@,,,,,@@@,,,,,,@@@,,,,,,,,,,,,,,,@@@,,,,,,,,,,,,,,@@@,,,,,,@@@,,,,,,@@@,,,,,,///
///,,,,,,,,,,,,,,@@@,,,,,@@@,,,,,,@@@,,,,,,,,,,,,,,,@@@,,,,,,,,,,,,,,@@@,,,,,,@@@,,,,,,@@@,,,,,,///
///,,,,,,,,,,,,,,@@@,,,,,@@@,,,,,,@@@,,,,,,@@@,,,,,,@@@,,,,,,,,,,,,,,@@@,,,,,,@@@,,,,,,@@@,,,,,,///
///,,,,,@@@,,,,,,@@@,,,,,@@@,,,,,,@@@,,,,,,@@@,,,,,,@@@,,,,,,@@@,,,,,@@@,,,,,,@@@,,,,,,@@@,,,,,,///
///,,,,,@@@,,,,,,@@@,,,,,@@@,,,,,,@@@,,,,,,@@@,,,,,,@@@,,,,,,@@@,,,,,@@@,,,,,,@@@,,,,,,@@@,,,,,,///
///,,,,,@@@,,,,,,@@@,,,,,@@@,,,,,,@@@,,,,,,@@@,,,,,,@@@,,,,,,@@@,,,,,@@@,,,,,,@@@,,,,,,@@@,,,,,,///
///,,,,,@@@,,,,,,@@@,,,,,@@@,,,,,,@@@,,,,,,@@@,,,,,,@@@,,,,,,@@@,,,,,@@@,,,,,,@@@,,,,,,@@@,,,,,,///
///,,,,,@@@,,,,,,@@@,,,,,@@@,,,,,,@@@,,,,,,@@@,,,,,,@@@,,,,,,@@@,,,,,@@@,,,,,,@@@,,,,,,@@@,,,,,,///
///     lp                                                                             rp
// [5, 11, 9, 15, 6, 9, 5, 10, 8, 13]


// Two Pointer Approach
int maxArea(vector<int> &heights)
{

    int lp = 0, rp = heights.size() - 1;
    int maxarea = 0;

    while (lp < rp)
    {

        // int area = min(heights[l], heights[r]) * (r - l);
        int height = min(heights[lp], heights[rp]); // length of container -- Water level is limited by the shorter line
        int width = rp - lp;
        int area = height * width;
        maxarea = max(maxarea, area);

        // Move the pointer pointing to the shorter line
        if (heights[lp] <= heights[rp]) // if left height is less l++
            lp++;
        else // if right height is less  r--
            rp--;
    }

    return maxarea;
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

        maxArea(heights);
        // Call solve or simillar function with args

        return 0;
    }
}