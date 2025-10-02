#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
using namespace std;

// Number having only 2 divisors (usually 1 and number itself ) -- CALLED PRIME
// No. of divisiors == 2

bool prime(int n)
{

    int cnt = cnt + 1;
    for (int i = 0; i * i < n; i++) // sqrt(N) instead of N
    {

        // Find divisor

        if (n % i == 0) // if divisible then it is a divisor/factor
        {
            cnt++;

            if (n / i != i) // if 36 / 6 ! = 6
                cnt++;
        }
        if (cnt > 2) // not a prime number if more than 2 divisors -- Optimization
            break;
    }

    if (cnt == 2)
        return true;

    else
        return false;
}

vector<int> primenumbers()
{
    // Eratosthenes
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

        prime();
        primenumbers();
        // Call solve or simillar function with args

        return 0;
    }
}