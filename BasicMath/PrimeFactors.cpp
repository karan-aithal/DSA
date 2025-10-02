#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
using namespace std;

bool PrimeorNot(int n)
{
    int cnt = 0;
    for (int i = 0; i * i < n; i++)
    {

        if (n % i == 0)
        {
            cnt++;

            if (n / i != i)
                cnt++;
        }
        if (cnt > 2)
            break;
    }

    return cnt == 2 ? true : false;
}

// Numbers which are Prime and divisors of N
void PrimeFactors(int n)
{

    vector<int> list;

    // sqrt(N) x sqrt(N) = O(N)
    for (int i = 0; i * i < n; i++) // sqrt(N) - reduce time compx
    {
        if (n % i == 0)
        {

            if (PrimeorNot(n))
                list.push_back(n);

            if (n % i != i)
                if (PrimeorNot(n))
                    list.push_back(n);
        }
    }

    // to avoid certain edge cases
    // 1. avoid iterating upto N if N itself prime
    // 2. Repeat Prime numbers when dividing to efficiently reduce number

    // 2 | 16
    // 2 | 8
    // 2 | 4
    // 2 | 2
    // 2 | 1

    for (int i = 2; i * i < n; i++)
    {
        if (n % i == 0)
        {

            if (PrimeorNot(n))
                list.push_back(n);

            while (n % i == 0)
                n = n / i; // 2. Reduce Number to reach all prime numbers faster by dividing using the same number
        }
    }

    if (n != 1) // 1. after dividing if we donot reach least number 1 , then include that for prime aswell
        list.push_back(n);
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

        PrimeFactors(n);
        // Call solve or simillar function with args

        return 0;
    }
}