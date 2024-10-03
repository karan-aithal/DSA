#include <iostream>
using namespace std;


int CountZeros(int n, int count)
{
    if(n==0)
    return count;

    if (n%10 == 0)
    return CountZeros(n/10, count+1);

    else
    return CountZeros(n/10, count);  
}


int main()
{
    int fc = CountZeros(1200300, 0);
    cout << fc<< endl;
    return 0;
}