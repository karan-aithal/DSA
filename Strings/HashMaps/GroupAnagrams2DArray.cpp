
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
using namespace std;

void solve() {

    // 1. using sorting and map
    // 2. using counting and map
  
    // create a hashmap with key as sorted string and value as list of anagrams
    // aet -> {eat, tea, ate}
    // nat -> {tan, nat}
    // abt -> {bat}

    char count[26] = {0};

    for(char c : "eat") {
        count[c - 'a']++;
    }
    for(int i = 0; i < 26; i++) {
        if(count[i] > 0) {
            cout << (char)(i + 'a') << ": " << count[i] << endl;
        }
    }

    unordered_map <char, int> freq_map;
    unordered_map <string, vector<string>> string_freq_map;

    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};

    for(string s : strs) {
        for(char ch : s) {
            // count[ch - 'a']++;
            freq_map[ch]++;
            
        }
    }


    map<string, vector<string>> anagram_map;
    for (const string& str : strs) {
        string sorted_str = str;
        sort(sorted_str.begin(), sorted_str.end());
        anagram_map[sorted_str].push_back(str);
    }
    vector<vector<string>> result;
    for (const auto& pair : anagram_map) {
        result.push_back(pair.second);
    }
    for (const auto& group : result) {
        for (const auto& word : group) {
            cout << word << " ";
        }
        cout << endl;
    }

    return;

    
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