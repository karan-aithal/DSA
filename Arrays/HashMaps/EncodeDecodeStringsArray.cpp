#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
using namespace std;

// Input: ["we","say",":","yes"]

// Output: ["we","say",":","yes"]

// "we","say",":","yes" -- str.size() + "#" + str

// "2#we3#say1#:3#yes"

string encode(vector<string> &strs)
{
    string encodedStrings = "";

    for (int i = 0; i < strs.count; i++)
    {
        // encodedString = encodedString.append((strs[i].size()) + strs[i]+ "#" ); ❌

        // correct way - convert int to string first
        // then concatenate instead of append
        encodedStrings += to_string(strs[i].size()) + "#" + strs[i];
    }
}


// "2#we3#say1#:3#yes" 
// find '#' -> look at previous char -> convert to int -> extract substring of that length after '#'
// repeat until end of string
vector<string> decode(string s)
{
    vector<string> decodedStrings;

    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == '#')
        {
            // Convert single digit char to int
            int length = s[i - 1] - '0'; // length of string , char to int

            // Make sure we don't go out of bounds
            if (i + length < s.size())
            {
                str = s.substr(i + 1, length);

                decodedStrings.push_back(str);

                i = i + length; // Move index to the end of the current string

                // Extract the substring of the specified length
                // starting from the character after '#'
                // str = s.substr(i + 1, length); ❌
                // substr(start_index, length_of_substring
            }
        }
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

        vector<string> strs;

        for (int i = 0; i < n; i++)
            cin >> strs[i];

        string encoded = encode(strs);

        vector<string> decoded = decode(encoded);

        // Call solve or simillar function with args

        return 0;
    }
}