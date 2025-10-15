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


// Marks all primes upto n as 1 
vector<int> GetSieves(int n)
{
    // Get Seives from L to R

    // Assume all as prime mark them -- 1  -- upto n + 1 , 1
    vector<int> prime(n + 1, 1);

    for (int i = 0; i * i <= n; i++)
    {
        if (prime[i] == 1)
        {

            for (int j = i * 2; j <= n; j = j + i) // loop through multiples of i
            {
                // Mark multiples as not prime
                prime[j] = 0;
            }
        }
    }

    return prime;
}


vector<int> L2RPrimeCount(vector<vector<int>> queries)
{
    // Queries{
    //     {L,R},
    //     {L,R},
    //     ...
    // }
    //
    // we have N queries
    int n = queries.size();
    // refers to finding all Divisors upto N
    // optimal is to find upto Sqrt(N)

    vector<int> divisors;

    vector<int> prime = GetSieves(n); // get all seives upto (10)^6
    // solve for ith query every iteration

    // After Sieves upto (10)^6
    // Create a prefix sum array for it, so it can be used for range sum
    vector<int> prefix(prime.size() + 1, 0);

    for (int i = 0; i < prime.size(); i++)
    {
        prefix[i] = prefix[i - 1] + prime[i];
        // current prefix is previous sum + current element
    }


    for (int i = 0; i < n; i++)
    {
        int l = queries[i][0]; // initialize L and R for query 'i'
        int r = queries[i][1];
        int count = 0;

        for (int j = l; j <= r; j++) // L -> R
        {
            // if(isPrime(j))
            //     count++;

            // Range sum
            prime[r + 1] - prime[l]; // Range Sum from PrefixSum array of primes
        }
    }
}

int main()
{
    fast_cin();
    ll t;

    int n;

    cin >> n;

    //   vector<int> nums;

    //    for (int i = 0; i < n; i++)
    //    {
    //         cin >> nums[i];

    //    }

    // queries ==> 2d vector

    int Q = 3;
    vector<vector<int>> queries = {{3, 10}, {8, 20}, {1, 5}};

    vector<int> divisors = L2RPrimeCount(queries);

    return 0;
}