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
#include <unordered_set>

using namespace std;

typedef long long ll;
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())

// Given a string s, find the length of the longest substring without duplicate characters.

int lengthOfLongestSubstring(string s)
{

    int l = 0; // left pointer of the sliding window
    int MaxLen = 0;

    unordered_set<char> cs;

    for (int r = 0; r < s.length(); r++)
    {

        // if string Null return 0

        // if not present in map add to map and update max length MaxLen -- >( Curlen = right pointer - left pointer + 1 )

        // if present in map update left pointer until the duplicate is removed from using while loop 
        if (s.length() == 0)
        {
            return 0;
        }

        if (cs.find(s[r]) == cs.end()) // if not found in set
        {
            cs.insert(s[r]);                      // Add to set and increment length
            MaxLen = max(MaxLen, (int)cs.size()); // size of hashset is maxlen of characters non repeating
        }

        else if (cs.find(s[r]) != cs.end()) // if present in hashset
        {
            while (cs.count(s[r])) // until the count of s[r] = 0, we  do l++ and erase s[l]
            {
                cs.erase(s[l]);
                l++; // Increment left pointer until the duplicate is removed from the set
                // here l iterates over the string until the count of s[r] = 0 in set, removing whatever is next char in string from set                
            }
            cs.insert(s[r]); // Add the current character to the set after removing duplicate
            MaxLen = max(MaxLen, (int)cs.size());
        }
    }
    return MaxLen;
}
// Write using unordered map and vector instead for large strings

int main()
{
    fast_cin();
    ll t;
    string s;

    cin >> s;
    cout << "Input string: " << s << endl;
    // fast_cin();
    // int n;
    // cin >> n;

    int len = lengthOfLongestSubstring(s);
    cout << len << endl;

    return 0;
}