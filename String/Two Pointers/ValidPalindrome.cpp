#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
using namespace std;

// Two Pointers Approach
bool ValidPalindrome(string s)
{
    int l = 0;
    int r = s.size() - 1;
    while (l < r)
    {
        while (l < r && (!isalnum(s[l]) || s[l] == ' '))
            l++;
        while (l < r && (!isalnum(s[r]) || s[r] == ' '))
            r--; 
        // skip character if it is a space or not alphanumeric (i.e., not a letter or digit).

        if (tolower(s[l]) != tolower(s[r])) // case insensitive comparison
        {
            cout << "Not a Palindrome" << endl;
            return false;
        }

        l++;
        r--;
    }
    return true;
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

        string s;
        cin >> s;

        ValidPalindrome(s);
        // Call solve or simillar function with args

        return 0;
    }
}