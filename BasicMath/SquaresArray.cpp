#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
using namespace std;

void sortedSquares(vector<int>& nums) {

    for (int i = 0; i < nums.size(); i++)
    {
        nums[i] = nums[i] * nums[i];
    }
    
 // for negative nums sorting is difficult ?? 
    // HOW to sort ??? 


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
    
    //int k ; cin << k;
    // int x;
    // cin >> x;
    sortedSquares( nums);
    // SearchElement(arr, size, x);

    // cout << "The array after removing duplicate elements is " << endl;
    // for (int i = 0; i < k; i++)
    // {
    //     cout << nums[i] << " ";
    // }

    return 0;
}