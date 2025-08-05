#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
using namespace std;

// Only find till Number all the divisors
// to reduce time complexity use sqrt(N) instead of N
// O(sqrt(N))
void Divisors(int n)
{

    for (int i = 1; i <= n; i++) // i * i <= n
    {
        if (n % i == 0)
            cout << i << " ";

        // if ((n / i) != 1)
        // {
        //     cout << n / i << " "; // divisors after sqrt(N)-> N
        //     // i * n/i = n

        //      Sorting required
        // }
    }
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

        int n;
        cin >> n;

        Divisors(n);
        // Call solve or simillar function with args

        return 0;
    }
}