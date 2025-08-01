#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
using namespace std;

//  Maximum borders
//  the maximum number of consecutive black cells in any row or column without any white cell in
// between.

void Maximumborders(int n, int m)
{

    char p[n][m];
    int ch = 0;
    int cd = 0;
    int maxBorder = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> p[i][j];
            if (p[i][j] == '#')
            {
                ch++;
            }
            else if (p[i][j] == '.')
            {

                maxBorder = max(maxBorder, ch);
                ch = 0;
            }
        }
    }
    cout << maxBorder << endl;
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
        int n, m = 0;

        cin >> n >> m;

        Maximumborders(n, m);

        // Call solve or simillar function with args
    }

    return 0;
}