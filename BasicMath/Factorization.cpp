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
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
 




vector<int> PrimeFactorization(int n){


    vector<int> primedivisors;

    int sqrtN = sqrt(n);

    for (int i = 2; i < sqrtN; i++)
    {
        
        if(n%i == 0)
        {
            primedivisors.push_back(i);
        }

        // if divisble by 2 keep dividing to reduce to smallest prime
        while(n%i == 0)
        {
            n =n /i;
        }

    }
    
}

vector<int> Factorization(int n){

    // refers to finding all Divisors upto N 
    // optimal is to find upto Sqrt(N)

    vector<int> divisors; 

    int sqrtN = sqrt(n); 
    for (int  i = 1; i < sqrtN; i++)
    {   
        if(n%i == 0)
        {
            divisors.push_back(i);
        }
    }
    return divisors;
    
}


int main()
{
    fast_cin();
    ll t;

    int n;

        cin >> n;

//         vector<int> nums;

//    for (int i = 0; i < n; i++)
//    {
//         cin >> nums[i];
    
//    }
    
   vector<int> divisors = Factorization(n);
  
   
    return 0;
}