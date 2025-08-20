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
 

void solve(){
}
int main() {
    // Fast I/O optimization: Untie C++ streams from C stdio and cin from cout
    // This can significantly improve performance for large inputs
    std::ios_base::sync_with_stdio(false); 
    std::cin.tie(NULL);

    // Read an integer representing the number of elements to process
    int n; 
    std::cin >> n; // Read a single integer from standard input

    // Create a vector to store the elements
    std::vector<int> numbers;

    // Loop to read 'n' integers from a single line, separated by spaces
    // cin automatically handles space-separated input by default
    for (int i = 0; i < n; ++i) { 
        int num;
        std::cin >> num; // Read each integer
        numbers.push_back(num); // Add the read number to the vector
    }

    // Print the elements of the vector, separated by spaces
    for (int i = 0; i < numbers.size(); ++i) { 
        std::cout << numbers[i]; // Print each element
        if (i < numbers.size() - 1) { 
            std::cout << " "; // Print a space if it's not the last element
        }
    }
    std::cout << "\n"; // Print a newline at the end of the output

    return 0; // Indicate successful execution of the program
}