#include <iostream>
using namespace std;

int Product(int n)
{ 
    // product of digits
    if (n == 0)
        return n;

    return (n % 10) * Product(n / 10);
}

int main()
{
    int ans = Product(5);
    cout << ans << endl;
    return 0;
}
