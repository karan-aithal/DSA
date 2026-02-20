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

     std::unordered_map

//  It’s a hash table–based associative container in C++.
//  Provides average O(1) time for insert, find, and erase (amortized), 
//  Amortized O(1) means that while individual operations may occasionally take longer, 
//  the average time per operation over a sequence of operations is constant.
// 
// but worst-case O(n) if many keys collide into the same bucket.
// Hash Collisions occur when multiple keys hash to the same bucket. 
// In such cases, the unordered_map uses chaining (e.g., linked lists) to store multiple key-value pairs in the same bucket, which can lead to O(n) time complexity for operations if many collisions occur.
// Hashing function is weak, rehashing keeps occuring , or we have 
// Keys are hashed using a hasher (defaults to std::hash<Key>), then placed in buckets.



// To avoid O(n) when Keys are contiguous  keys ∈ [1 … N] ->
//  Use a vector instead of unordered_map, and directly use the key as an index to access the value.
vector<ll> v;
v = vector<ll>(x, y);
v.size() // == x // becomes x
v[i] = y //  for all 0 ≤ i < x , [y, y, y, y, y]
v.capacity() // becomes ≥ x


}


int main()
{
    fast_cin();
    ll t;
    cin >> t;
    fast_cin();
    int n;
    cin >> n;
     vector<int> nums; 
     for (int i = 0; i < n; i++)
     {
        cin >> nums[i];
     }
       solve(nums);
    
    return 0;
    }