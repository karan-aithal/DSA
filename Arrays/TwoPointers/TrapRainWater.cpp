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

void trap(vector<int> &height)
{
    int lp = 0, rp = height.size() - 1;
    int leftMax = height[lp], rightMax = height[rp];

    // height = [0,2,0,3,1,0,1,3,2,1]
    //          lp                  rp
    //          leftMax             rightMax
    //

    vector<int> waterTraped(height.size(), 0);

    while (lp < rp)
    {
        // To Update Leftmax and Rightmax
        // while moving both pointers towards each other

        // Lp is the minimum pointer
        // check height[lp] with leftMax to update , Then increment lp
        if (leftMax < rightMax)
        {
            lp++; // increment before checking height[lp]

            if (height[lp] > leftMax)
            {
                leftMax = height[lp];
            }
            else if (height[lp] > min(leftMax, rightMax)) // if water trapped is negative then make it 0
            {
                waterTraped[lp] = 0; // make sure current index height is not negative
            }
            else
                waterTraped[lp] = min(leftMax, rightMax) - height[lp];
        }

        if (leftMax > rightMax)
        {
            rp--;

            if (height[rp] > rightMax)
                rightMax = height[rp];

            else if (height[rp] > min(leftMax, rightMax))
                waterTraped[rp] = 0; // if water trapped is negative then make it 0

            else
                waterTraped[rp] = rightMax - height[rp];
            // if it is not greater
            // if rightMax is min then water trapped is rightMax - height[rp]
        }

        // after updating leftMax and rightMax
        // and moving pointers
        // store water trapped at each index

        // if (leftMax <= rightMax)
        // {
        //     water[lp] = min(leftMax, rightMax) - height[lp];
        // }

        // water[lp] = min(leftMax, rightMax) - height[lp];
        // water[rp] = min(leftMax, rightMax) - height[rp];
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
    vector<int> height;

    for (int i = 0; i < n; i++)
    {
        cin >> height;
    }

    trap(height);

    return 0;
}