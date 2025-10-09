#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
using namespace std;

// Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
n+m = 6 = i

1,2,3,0,0,0
          i
k

2,5,6
j
    2 2 3 5 6                 
    if j>=k
      i -> j
      j--;

    
        
    else
      i -> k
      k--;
    i--;


void MergeSortedArray(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    // The final sorted array should not be returned by the function,
    // but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n
    // i = m
    // j = n
    // k = m + n

    int i = m-1;
    int j = n-1;
    int k = m + n -1;

    // worry only about j -> nums2 being exhausted 
    // As nums1 already is in place for other elements.

    while (j >=0)  
    {

        if( i>=0  && nums1[i] > = nums2[j] )
        {
            nums1[k] = nums1[i];
            k--;
            i--;
        }

        // else if(nums1[i] < = nums2[j] ) // else if is not required ; only else
        else
        {
            nums1[k] = nums2[j];
            k--;
            j--;
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

         int m = 0;
        cin >> m;

        vector<int> nums1;

        for (int i = 0; i < n; i++)
            cin >> nums1[i];

        vector<int> nums2;

        for (int i = 0; i < m; i++)
            cin >> nums2[i];

        MergeSortedArray(nums1 ,n, nums2, m);
        // Call solve or simillar function with args

        return 0;
    }
}