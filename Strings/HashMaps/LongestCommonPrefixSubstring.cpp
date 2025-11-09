#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
using namespace std;

// strs = ["flower","flow","flight"]
// Output: "fl"

// Brute Force Approach
// [str, str , str , str]
// [0,    1,    2,    3]
void longestCommonPrefix(vector<string> &strs)
{

    int n = strs.size();
    int minLength = INT_MAX;

    // Find the minimum length of strings present
    for (auto &&str : container)
    {
        if (str.length() < minLength)
            minLength = str.length();

        // minLength = min(minLength, (int)str.length());

    }
    

    for (string &str : strs) // str is reference to avoid copying
    {
        
        while (i < minLength) // iterate till min length only
        {
            if (str[i] != strs[0][i]) // compare with first string until mismatch
            {
                return strs[0].substr(0, i); // return after mismatch
            }
            i++; // move to next character
        }

    }

    return strs[0].substr(0, minLength); // if no mismatch return the smallest string
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

        vector<int> strs;

        for (int i = 0; i < n; i++)
            cin >> strs[i];

        longestCommonPrefix(strs);
        // Call solve or simillar function with args

        return 0;
    }
}