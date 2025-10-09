#include <bits/stdc++.h>
using namespace std;


int countDigits(int n)
{

    int cnt = 0;

    while (n > 0)
    {
        cnt++;
        n = n / 10;
        
    }
    return cnt;

    // count digits using log10 !!
    // cnt = (int)log10(n)+1; // log(1234) = 3.0969100 + 1 = 4.09 ~ 4 digits

    // WHENEVER WE HAVE DIVISON
    // if iterations depends on division of numbers 
    // we can use logn , n => x/n number 

}


int main()                  
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        // 1024
        cout << "Number of Digits in N: "<< countDigits(n);
    }
    
}

// Reverse a Number
// Check Palindrome
// GCD Or HCF
// Armstrong Numbers
// Check for Prime
// Print all Divisors