#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
using namespace std;

// print all Primes until n
// 1. mark all numbers upto N as 1(true)
// 2. Iterate upto N
// 3. mark all multiples(factors) of a number which is 1 --> 0
// 4.
// Find multiples of a number and cross it out
// Remnaining are Primes

void Eratosthenes(int n)
{

    int prime[n] = {1};

    for (int i = 2; i < n; i++)
    {
        if (prime[i] == 1)
        {
            for (int j = i * 2; i < n; j = j + i) // start from i x 2 in tables for i and increment by i
            {
                // if (n % i == 0) // not required as already looping only through multiples above
                prime[i] = 0
            }
        }
    }

    //  i = 3 --> multiples of 3 ==> j + 3(i)
    // j = i x 2 = 6 + 3 start from i * 2  - optimize start fromn i * i
    // j = i x 3 = j + i = 9
    // j = 12
    // j = 15
    // j = 18 ...

    for (int i = 2; i < n; i++)
    {
        cout << prime[i];
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

        int n = 0;
        cin >> n;

        Eratosthenes();
        // Call solve or simillar function with args

        return 0;
    }
}