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
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())

int findMaxConsecutiveOnes(vector<int> &nums)
{
    int count = 0;
    int res = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        
        if(nums[i] == 0)
            count = 0;
        
        else
            count++;

        res = max(count , res); // update result with max count made
    }    
    return res;
}


int main()
{
    // Fast I/O optimization: Untie C++ streams from C stdio and cin from cout
    // This can significantly improve performance for large inputs
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

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

    result = findMaxConsecutiveOnes(numbers);

    cout << result;

        return 0;
}