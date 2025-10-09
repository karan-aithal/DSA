#include <stdio.h>

void printRecursive(int n)
{
    if (n==0)
        return;

    printf("%d", n); // printf not allowed for streams      // use cout instead
       return printRecursive(n-1);
}

int fibo(int n)
{
    if (n<2)
    {
        return n;
    }
    
   return fibo(n-1) + fibo(n-2);

    // 3 + 2
    // 2 + 1
    // 1 + 0
    //Left tree is called first and returned
    // later Right tree is called and returned
}

int main()
{
    // printRecursive(4);
    // Fix above print calls using recurssion
    int x = 0;

    x =  fibo(4);
    
    printf("\n%d\n", &x);
    // A pointer that points to a memory location that has been deallocated or has become invalid.
}

    //  
    //   +-----+
    //   | f(1)|
    //   +-----+
    //   | f(2)|
    //   +-----+
    //   | f(3)|
    //   +-----+
    //   | f(4)|
    //   +-----+
    //   | main |
    //   +-----+
    