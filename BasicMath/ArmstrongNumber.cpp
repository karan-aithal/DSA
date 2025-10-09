#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
using namespace std;



//  Cubes of digits == number itself 
int Armstrong (int n) {

    int on = n;
    int ams = 0;

    while (n > 0)
    {
        int ld = n % 10;
        int ams = ams + (ld*ld*ld);
        n = n/10;
    }

    if (ams == on)
        return true;
    
    else
        return false;

}

int main() {

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;     cin >> t;
    while (t--)
    {
        // Input for array ,number etc...
    
    int n = 0;
    cin >> n;
    
        // Armstrong 
    cout << Armstrong (n);
        

        return 0;
    }
}