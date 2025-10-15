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

void ReverseNumber(int n)
{
    // 123456
    int Rev = 0;
    while (n > 0)
    {
        int ld = n % 10;
        Rev = (Rev * 10) + ld;
        n = n / 10;
    }

    cout << Rev;
}


int main()
{
    fast_cin();
    ll t;
    cin >> t;
    fast_cin();
    int n;
    cin >> n;

    ReverseNumber(n);

    return 0;
}