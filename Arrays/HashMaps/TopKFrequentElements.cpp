#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
using namespace std;

// 1. Sorting + HashMap
// //store frequency in hashmap, then push elements to array/vector pair then sort this based on frequency and return top k elements

// 2. Min Heap + HashMap
// //store frequency in hashmap, then push elements in min heap of size k based on frequency, if size exceeds k pop the min element, finally return elements in heap
// // priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> heap; -- min heap of pairs
// //         (1, 200)
// //        /        \
// //   (3, 100)    (2, 150)

// 3. Bucket Sort + HashMap
// // store frequency in hashmap, then create buckets ( 2D Vector- matrix ) where index represents frequency and each bucket contains elements with that
// // frequency, finally iterate from end to start and collect top k frequent elements
// // vector<vector<int>> freq = {
// //     {1, 2, 4, 5, 32},
// //     {3, 4, 3, 22, 2},
// //     {5, 6, 32, 1, 5}
// // };

vector<int> topKFrequent(vector<int> &nums, int k)
{
    // 3. Bucket Sort + HashMap
    unordered_map<int, int> freq;                 // element -> frequency
    
    vector<vector<int>> buckets(nums.size() + 1); // frequency -> elements
    // element can appear at max n times where n is size of array - nums.size()


    // Count frequency of each element
    for (int n : nums)
    {
        count[n]++;
    }

    // Place elements into corresponding frequency buckets
    // for (const auto &entry : count)
    // {
    //     freq[entry.second].push_back(entry.first);
    // }

    // Travese hashmap freq from start to end and add elements to 2d matrix buckets
    for (auto it = count.begin(); i < count.end(); i++)
    {
        int element = it->first;               // key
        int frequency = it->second;            // value
        buckets[frequency].push_back(element); // value.push_back(key);

        // buckets[1] = {element1, element2, ...} // elements with frequency 1
        // buckets[2] = {element3, element4, ...} // elements with frequency 2 ...
    }


    vector<int> result;

    // keep adding elements from buckets starting from end until we have k elements
    // since we need top k frequent elements
    // [ 1 1 1 2 2 3 ] -> buckets[3] = {1}, buckets[2] = {2}, buckets[1] = {3}
    // k = 2 -> result = {1, 2}

    // add top frequent elements first until k elements are added
    // iterate from end to start
    
    //Travese buckets from end to start upto frequency k and add elements to result
    for (int i = buckets.size()-1; i > 0; i--)
    {
        for (int n : buckets[i])
        {
            result.push_back(n); 
            if (result.size() == k)
                return result;
        }
        
    }
    
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        // Input for array ,number etc...

        int n = 0;
        cin >> n;

        vector<int> nums;

        for (int i = 0; i < n; i++)
            cin >> nums[i];

        int k;
        cin >> k;

        topKFrequent(vector<int> & nums, int k);
        // Call solve or simillar function with args

        return 0;
    }
}