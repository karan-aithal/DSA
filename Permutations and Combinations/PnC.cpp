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

void solve()
{

//     A sequence of length n has exactly n! permutations.
// Since:

// - The sequence of permutations is finite
// - And you have tested all possibilities
// - And none satisfy the constraint (or no new ones satisfy)

// Then:
// ✔ Exhaustion of permutations → completion of search
// ✔ Completion of search → no further valid configuration exists

// This is a fundamental principle in:
// Backtracking algorithms
// Constraint satisfaction problems
// Brute-force search
// Lexicographic permutation generation


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
    solve(nums);

    return 0;
}
