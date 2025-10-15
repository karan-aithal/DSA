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
 

void solve(string s){
// Freq Map
// or 
//
unordered_map<char,int> mp ;  
// int int map or 
//  char int  map 
int maxCnt = 0;
//Find maximum occurring character in a string

for (int i = 0; i < s.length(); i++)
{
    mp[s[i]]++ ;
    // map[key] val++ -- adds key to map and increment value for each key

    // each time we store a max count of char we check for 
    if(maxCnt < mp[s[i]])// current key/char value is greater than maxCount
        maxCnt = mp[s[i]]; // store curr val in maxCnt; // update 


        // store current max count in value 


}


}


int main()
{
    fast_cin();
    ll t;
    cin >> t;
    for(int it=1;it<=t;it++) {
        string s;
        cin >> s;
        solve(s);
    }
    return 0;
}