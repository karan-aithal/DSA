#include <iostream>
#include <cmath>
using namespace std;

static int helper(int n, int digits);
int sum = 0;

static void Reverse(int n)
{
    if (n == 0)
        return;

    int rem = n % 10; // Reverse(4321);  // n%10 = 1
    // n/10 = 432
    sum = sum * 10 + rem; // 1,  12, 123, 1234  !!!
    Reverse(n / 10);
    // changes variable outside , therfore  returnv void
}

static int helper(int n, int digits)
{

    if (n % 10 == n) // if 1 digit number return number itself
        return n;

    int rem = n % 10; // remainder store  / 4321 / 1

    return rem * pow(10, digits - 1) + helper(n / 10, digits - 1);//  1 x 10^3,  2 x10^2 ... !!!
}

static int Rev2(int n)
{
    // since we are returning number back to , return int to a helper(n,digits)

    int digits = (int)(log10(n)) + 1; // used to find nO. of digits in a number !!!

    return helper(n, digits);
}

int main()
{
    Reverse(4321);

    cout << sum << endl;

    int ans = Rev2(4321); //  
    //  1 x 10^3,  2 x10^2 ... !!!
    // no of digits

    cout << ans << endl;

    return 0;
}