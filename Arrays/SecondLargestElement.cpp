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
 

void SecondLargest(vector<int> numbers){

    int Larg =0;
    int sec = 0;

    for (int i = 0; i < numbers.size(); i++)
    {
            if(numbers[i] > Larg )
            {  
                sec = Larg; // second largest 
                Larg = numbers[i];
            }

            else if(numbers[i] < Larg  && numbers[i] > sec)
            {
                sec = numbers[i];
            }
    }

}



int main()
{
    fast_cin();
   // Read an integer representing the number of elements to process

    int n;
    cin >> n; // Read a single integer from standard input

    // Create a vector to store the elements
    vector<int> numbers;
    int result = 0;
    // Loop to read 'n' integers from a single line, separated by spaces
    // cin automatically handles space-separated input by default
    for (int i = 0; i < n; ++i)
    {
        int num;
        cin >> num;             // Read each integer
        numbers.push_back(num); // Add the read number to the vector
    }

    result = SecondLargest(numbers);

    cout << result;

        return 0;

}