#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
using namespace std;

// 1. Vector<vector<int>> for 2D array
// 2. Map<char, int> for frequency counting
// 3. Set<int> for unique elements
// 4. String for string manipulations
// 5. Pair<int, int> for storing pairs of values
// 6. Queue<int> for BFS or level order traversal
// 7. Stack<int> for DFS or backtracking
// 8. Unordered_map<int, int> for faster lookups
// 9. Priority_queue<int> for max/min heap operations
// 10. List<int> for doubly linked list operations
// 11. Deque<int> for double-ended queue operations
// 12. Bitset for bit manipulation
// 13. Tuple<int, int, int> for storing multiple values
// 14. Array<int, 100> for fixed-size arrays
// 14. Forward_list<int> for singly linked list operations
// 15. Multiset<int> for storing multiple occurrences of elements
// 16. Unordered_set<int> for faster unique element storage
// 17. Stack<string> for string-based stack operations
// 18. Queue<string> for string-based queue operations
// 19. Map<string, int> for string frequency counting
// 20. Vector<pair<int, int>> for storing pairs in a vector
// 21. Set<string> for unique string storage
// 22. Unordered_map<string, int> for faster string lookups
// 23. Priority_queue<pair<int, int>> for max/min heap of pairs
// 24. List<string> for doubly linked list of strings
// 25. Deque<string> for double-ended queue of strings
// 26. Bitset<100> for fixed-size bit manipulation
// 27. Tuple<string, int, int> for storing multiple values with a string
// 28. Array<string, 100> for fixed-size string arrays
// 29. Forward_list<string> for singly linked list of strings
// 30. Multiset<string> for storing multiple occurrences of strings
// 31. Unordered_set<string> for faster unique string storage




void solve() {
    // Write your code here
    string s1, s2;
    cin >> s1 >> s2;

    map<char, int> freq1, freq2;

    for (char c : s1) {
        freq1[c]++;
    }

    for (char c : s2) {
        freq2[c]++;
    }

    if (freq1 == freq2) {
        cout << "Anagrams" << endl;
    } else {
        cout << "Not Anagrams" << endl;
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;     cin >> t;
    while (t--)
    {
        // Input for array ,number etc...
    
    int n = 0;
    cin >> n;
    
     vector<int> nums;
    
     for (int i = 0; i < n; i++) 
        cin >> nums[i];
    
        solve();
        // Call solve or simillar function with args

        return 0;
    }
}