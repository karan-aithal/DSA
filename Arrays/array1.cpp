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
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())

void solve()
{
}
int main()
{
    // Fast I/O optimization: Untie C++ streams from C stdio and cin from cout
    // This can significantly improve performance for large inputs
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    // Read an integer representing the number of elements to process
    int n;
    std::cin >> n; // Read a single integer from standard input

    // Create a vector to store the elements
    std::vector<int> numbers;
    vector<ll> v; // Long long - 64 bit integer type, can store larger values than int (32 bit)

    // Loop to read 'n' integers from a single line, separated by spaces
    // cin automatically handles space-separated input by default
    for (int i = 0; i < n; ++i)
    {
        int num;
        std::cin >> num;        // Read each integer
        numbers.push_back(num); // Add the read number to the vector
    }

    // Print the elements of the vector, separated by spaces
    for (int i = 0; i < numbers.size(); ++i)
    {
        std::cout << numbers[i]; // Print each element
        if (i < numbers.size() - 1)
        {
            std::cout << " "; // Print a space if it's not the last element
        }
    }
    std::cout << "\n"; // Print a newline at the end of the output

    // -------------------------------------------------------------
    // Spiral Array Print
    // Max Length Bitonic Subarray
    // Piyush and Magical Park (grid simulation)
    // Reading a 2D char array
    // Reading a list of strings
    // Form Biggest Number (custom sort + comparator)
    // -------------------------------------------------------------

    
    // INTEGER ARRAY vs CHAR ARRAY
    // ________________________________________

    int b [] = {1, 2, 3};
    cout << b << endl; // This will print the memory address of the first element of the array 'b' (not the contents of the array)

    char c [] = {'a', 'b', 'c'};
    cout << c << endl; // This will print the characters in the array 'c'
    // because char arrays are treated as C-style strings, 
    //and the output operator (<<) will print characters until it encounters a null terminator ('\0').

    // PROBLEMs with using '\0' in the end ,null terminator '\0'.



    return 0; // Indicate successful execution of the program
}