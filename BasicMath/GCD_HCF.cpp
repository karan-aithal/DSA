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
    for (int i = min(n1, n2); i >= 1; i--)
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
// keep dividing the larger number by the smaller number until one of the remainder is 0;
// large/ small = remainder => store in respective number
int Euclidian_GcdHcf(int n1, int n2)
{
    int a = n1;
    int b = n2;

    while (a > 0 && b > 0)
    {
        if (a > b)
            a = a % b; // 1st loop 40 / 15 => r = 10  --> a =10 ,

        else
            b = b % a; // 2nd loop 15 / 10 --> b = 5
    }

    if (a == 0)
        return b;
    else if (b == 0)
        return a;
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