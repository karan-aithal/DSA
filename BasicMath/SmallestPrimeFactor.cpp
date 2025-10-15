#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>

using namespace std;

typedef long long ll;
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())

// Instead of just marking whether a number is prime,
// it stores the smallest prime that divides each number.

// we can do this using 2 ways
// 1. Assign everything as 1 -- unprocessed , then change it to spf(itself) if still 1
// 2. Assign everything to itself(i) -- unprocessed , then change it to spf(itself)

vector<int> SmallestPrimeSieve(int n)
{
    // smallest prime factor Array
    vector<int> spf(n + 1, 1);

    for (int i = 0; i < n; i++)
    {
        //if(spf[i] == i ) // i is prime
        if (spf[i] == 1)
        {
            for (int j = 2 * i; j <= n; j = j + i)
            {
                // if spf[i] is still marked as 1 , as hasnt marked as 0 or a spf
                
                if(spf[j] == 1)
                    spf[j] = j; 
                // spf[j] == i // set smallest prime factor of j to i
                    
                    // If prime not found by other multiples
                    // mark it with that number itself as it itself is its smallest prime
                    // if its smallest prime factor is sill 1 means its spf hasnt been found yet.
            //Smallest multiple that marks a number as not prime is the spf

            }
        }
    }
}

int smallestPrimeFactor(int n)
{
    // divide each number by prime number using the spf for that number
    // from above 
    
}

int main()
{
    fast_cin();
    ll t;
    cin >> t;
    fast_cin();
    int n;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    SmallestPrimeSieve(n);

    return 0;
}
