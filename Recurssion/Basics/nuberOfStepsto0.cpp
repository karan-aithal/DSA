#include <iostream>
using namespace std;

int noofSteps(int n, int steps)
{
    if(n%2 == 0)
    noofSteps(n/2 ,steps+1);
    
    else
    noofSteps(n-1 ,steps+1);
}


int main()
{
    
    
    return 0;
}