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
    // SLIDING WINDOW

    // Longest Substring Without Repeating Characters
    // 325. Maximum Size Subarray Sum Equals k 🔒
    // 560. Subarray Sum Equals K
    // 2461. Maximum Sum of Distinct Subarrays With Length K
    // 2. Maximum Sum Subarray of Size K
    // 3. Minimum Window Substring
    // 4. Longest Repeating Character Replacement
    // 5. Sliding Window Maximum
    // 6. Longest Subarray with Ones after Replacement
    // 7. Smallest Subarray with Sum Greater than S
    // 8. Frutis into baskets
    // 10. Find All Anagrams in a String
    // 11. Subarray sum equals K
    // 12. Subarry sums divisible by K
    // 13. Longest subarray with sum k 

    // Constant Length Sliding Window
    // substrings-of-size-three-with-distinct-characters/
    // number-of-sub-arrays-of-size-k-and-average-greater-than-or-equal-to-threshold/

    // Variable Length Sliding Window
    // minimum-size-subarray-sum/
    // 4. Longest Repeating Character Replacement
    // Max Consecutive Ones III
    // https://cses.fi/problemset/task/1141
    // Shortest subarray with sum atleaast K
    // 8. Fruits into baskets
    // binary subarrays with sum
    // subarrays with k different integers
    // get equal substrings within budget
    // replace substring for balanced string
    // count number of nice subarrays
    // number of substrings containng all three characters
    // 5. Sliding Window Maximum

// Extra Problems:
// https://codeforces.com/contest/616/problem/D
// https://cses.fi/problemset/task/2428
// https://cses.fi/problemset/task/1644
// https://cses.fi/problemset/task/1076
// https://cses.fi/problemset/task/1077

    // Longest Substring with At Most K Distinct Characters
    // Longest Substring with At Least K Repeating Characters
    // Longest Substring with At Most Two Distinct Characters
    // Longest Substring with At Least Two Repeating Characters
    // -------------------------------------------------------------
    // 001 function will find the largest element in an array
    // 002 function will find the second largest element in an array
    // 003 function will find the third largest element in an array
    // 004 function will find the smallest element in an array
    // 005 function will find the second smallest element in an array
    // 006 function will check if array is sorted
    // 007 function will rotate an array to left by d
    // 008 function will rotate an array to right by d
    // 009 function will reverse elements in array
    // 010 function will Remove_Duplicates_from_a_sorted_array
//-----------------------------------------------------------------
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