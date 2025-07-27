#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
using namespace std;

int sumofdigits(int n) {

    int sum = 0;
    while (n > 0)
    {
        sum += n%10;
        n=n/10;
    } 
    return sum;
}

int productofdigits(int n)
{
    int prod =1;
    while (n>0)
    {
        prod *= n%10;
        n=n/10;
    }

    return prod;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;     cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        // Input for array ,number etc...

        cout << "Sum of Digits: "<<    sumofdigits(n) << endl;
    
        cout << "Product of Digits: "<<    productofdigits(n) << endl;

        // Call solve or simillar function with args

        return 0;
    }
}