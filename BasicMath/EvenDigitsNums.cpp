#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
using namespace std;

int EvenDigitNums(vector<int>& nums) {

    int even = 0; 
    for (int i = 0; i < nums.size(); i++)
    {
        // while(n!=0)
        // {
        //     n=n/10; // divide by 10 
        // }

        // convert to string for optimal time 
        string str = to_string(nums[i])

        if(str.length()%2 == 0);
            even++;

    }

    return even;


    


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
    EvenDigitNums( nums);
    // SearchElement(arr, size, x);

    // cout << "The array after removing duplicate elements is " << endl;
    // for (int i = 0; i < k; i++)
    // {
    //     cout << nums[i] << " ";
    // }

    return 0;
}