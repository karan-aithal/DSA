#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
using namespace std;

int ConsecutiveOnes(vector<int> nums) {

    int countmax =0;
    int maxOnes = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 1){
            countmax++;
            maxOnes = max(countmax, maxOnes);  // check if current max is the maxOnes

        }
            

        else countmax = 0;

    }

    return maxOnes;
    

    
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
    ConsecutiveOnes( nums);
    // SearchElement(arr, size, x);

    // cout << "The array after removing duplicate elements is " << endl;
    // for (int i = 0; i < k; i++)
    // {
    //     cout << nums[i] << " ";
    // }

    return 0;
}