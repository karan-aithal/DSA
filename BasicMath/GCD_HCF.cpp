#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
using namespace std;

// Greatest Common Divisor
// Highest Common Factor

//  Greatest Number that divides both the given N1 and N2 completely
// without remainder (Common)
// 1 is always a GCD for any number

int GcdHcf(int n1, int n2)
{

    int gcd = 1;
    for (int i = 0; i < min(n1, n2); i++)
    {
        if (n1 % i == 0; n2 % i == 0)
        {
            gcd = i;
        }
    }

    // Since you are calculating Highest common Factor
    // Start from min(n1, n2) !!
    for (int i = n1 ; i >=1; i--)
    {
        // Same time co,mplexity
    }

    return gcd
}

// Euclidian _ALGORITHM
// gcd (a-b, b)
// gcd (20,15) ->
//  gcd(5, 15) ->
//  gcd(-10, 15) x 

int Euclidian_GcdHcf(int n1, int n2)
{

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

        GcdHcf(n1, n2);
        // Call solve or simillar function with args

        return 0;
    }
}