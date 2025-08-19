#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
using namespace std;

// Buy stock at lowest price, sell at highest ,i <= j , i.e j = i+1
// Can be solved using Kadane's Algorithm -- chek
int StockBS(int arr[], int n)
{

    int minPrice = INT_MAX;
    int maxProf = 0;

    for (int i = 0; i < n; i++)
    {
        // Update the minPrice if it is greater than the current element of the array
        minPrice = min(arr[i], minPrice);

        // difference of the minPrice with the current element of the array and compare and maintain it in maxPro.
        // Max Difference -- any diff
        // stock - diff with small element first 
        maxProf = max(arr[i] - minPrice, maxProf);
    }

    return maxProf;
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

        int res = StockBS(arr, n);

        cout << "The maximum profit is " << res;

        return 0;
    }
}