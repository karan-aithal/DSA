#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
using namespace std;

//  maximum difference between any two elements such that larger element appears after the smaller number.
int MaxDifference(int arr[], int n)
{

    // find min var in array,
    // find max val in array simultaneously
    // store maxDiff = max ( diff(max - min) , maxDiff)

    int minVal = arr[0];
    int maxDiff = arr[1] - arr[0];

    for (int i = 1; i < n; i++)
    {
        maxDiff = max(arr[i] - minVal, maxDiff);
        // use prev minval to calc maxDiff

        minVal = min(arr[i], minVal);
    }

    return maxDiff;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {

        int n = 0;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        // Input for array ,number etc...

        int res = MaxDifference(arr, n);

        cout << "The maximum difference with order is: " << res;

        return 0;
    }
}