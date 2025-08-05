#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
using namespace std;

// Zoos

bool Zoos(string z)
{

    int zc = 0;
    int oc = 0;
    
    for (char ch : z)
    {
        if (ch == 'z')
            zc++;
        if (ch == 'o')
            oc++;
    }
    if (2 * zc == oc)
        return true;

    else
        return false;
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

        string z;
        cin >> z;

        Zoos(z) ? cout << "Yes"  : cout << "No" << endl;
        // Call solve or simillar function with args

        
    }
}