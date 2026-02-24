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
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
 

void solve(){
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