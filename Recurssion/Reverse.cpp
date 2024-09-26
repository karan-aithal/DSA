#include <iostream>
using namespace std;

int Reverse(int n)
{
    Rev(4321);  // n%10 = 1
    // n/10 = 432
    Rev(432);   
    Rev(43);    // n/
    Rev(4);
    
}

int main()
{
    int ans = Reverse(4321);

    cout << ans << endl;

    return 0;
}