#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
using namespace std;

int ReverseNum(int n)
{

    int rev = 0;

    while (n > 0)
    {
        int lastdigit = n % 10;
        rev = (rev * 10) + lastdigit;
        n = n / 10;
    }

    return rev;
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
        cout << ReverseNum(n);
        // Call solve or simillar function with args

        return 0;
    }
}