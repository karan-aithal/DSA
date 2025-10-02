#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
using namespace std;

double Exponent(int x, int n)
{

    double ans = 1;
    int m = n; // for -ve powers
    while (n > 0)
    {
        //  3^9 -->  (3)*(3)^8  -->  ((3^2)^4)  --> (9)^4) --> (9^2)^4/2 --> (81)^2 --> (81 * 81) == 6561

        if (n % 2 == 1) // odd power - reduce it to even by - 1 and x^2 
        {
            ans = ans * x;
            n = n - 1
        }

        else // even power -- divide by 2 and x^2
        {
            n = n / 2;
            x = x * x;
        }

        if (m < 0)
            ans = 1 / ans; // for -ve powers
    }

    return ans;
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

      
        cout << Exponent(int x, int n);
        // Call solve or simillar function with args

        return 0;
    }
}