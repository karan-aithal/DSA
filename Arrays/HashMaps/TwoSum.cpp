#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
using namespace std;

vector<int,int> TwoSum(nums, target) {  // returns i1 and i2 

    // x1 + x2 = target 
    // i1  , i2 
    unordered_map <int , int > hmap;
    // leave breadcrumbs for further elements to find
    
    

    for(int i = 0 ; i< nums.size(); i++)
    {
        int diff = target - nums[i];

        if(hmap.find(diff) != hmap.end())  // find diff(x2) in hashmap , If it doesn't, find() will return hmap.end()!!
        {
            // issue is this code -- hmap[diff] Will insert diff into the map if it doesn’t exist so use below code -->
            
            // return { hmap[diff] , i  } // hmap[key] -> index value i2 , i -> i1 

             return { hmap.find(diff)->second , i}
        }  

        // else store the current element for future elements to find
        // we check the map to see if that diff (i.e number x2) has already been dropped as a breadcrumb.

        // hmap[nums[i]] = i ;  // Will update diff into the map if it doesn’t exist so use below code -->
         hmap.insert({nums[i], i});
    }

}




int main()
{
    // int arr[] = {};
    // int size = sizeof(arr) / sizeof(arr[0]);
    // LargestElementArray(arr, size);

    int n = 0;
    cin >> n;

    vector<int> nums;

    for (int i = 0; i < n; i++)
        cin >> nums[i];
    
    int k ; cin << k;
    // int x;
    // cin >> x;
    // SearchElement(arr, size, x);

    cout << "The array after removing duplicate elements is " << endl;
    for (int i = 0; i < k; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}