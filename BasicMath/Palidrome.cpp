#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
using namespace std;

// PALINDROME -> 
// REV == ACTUAL:   store a duplicate of act num

int Rev(int n ) {
    int revnum =0;
    int rem =0;

    while (n>0)
    {
        rem = n%10;
        revnum = rem + revnum * 10;
        n=n/10;

    }
    
    return revnum;
}


int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;     cin >> t;
    while (t--)
    {
        // Input for array ,number etc...
        int n;
        cin >> n;

        //  Reverse a Number & Check Palindrome
        bool pal = Rev(n) == n;
        cout << "Palindrome: "<< n <<" "<< (pal ? "true" : "false") << endl;

        return 0;
    }
}