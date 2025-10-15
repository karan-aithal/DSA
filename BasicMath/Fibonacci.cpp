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

using namespace std;

typedef long long ll;
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())

void Fib(int n)
{

    // Display Fibonacci series upto n

    int a = 0;
    int b = 1;
    int c = 0;
    cout << a << " ";
    cout << b << " ";

    for (int i = 2; i < n; i++)
    {
        c = a + b; // next term 
        a = b;
        b = c;

        cout << c << " "; // print nect term 
    }
}



int FibRecc(int n)
{
// Return nth Fibonacci number

if(n<=1)
    return n;

    // Since Fib(n) = Fib(n-1) + Fib(n-2);
    // Fib(5) = add previous 2 number to get ,
    // i.e n-1 th number and n-2th number


    return FibRecc(n-1) + FibRecc(n-2);
    //         4 + 3
    //       /\     /\
    //     3 +  2   2  1
    //     /\   
    //    2 + 1 
    //   1  +   1
}


int main()
{
    fast_cin();
    ll t;
    cin >> t;
    int n = 0;

    for (int it = 1; it <= t; it++)
    {

        cin >> n;
        Fib(n);
    }
    return 0;
}