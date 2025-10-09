#include <iostream>
using namespace std;

void Nto1(int n)
{
    if (n == 0)
        return;

    cout << n << endl;
    Nto1(n - 1);
}

void onetoN(int n)
{   
    if (n == 0)
        return;

    onetoN(n - 1);//
    // creates a call stack with 
    cout << n << endl;
    
}

int main()
{
    //Nto1(5);

    onetoN(5);
    return 0;
}