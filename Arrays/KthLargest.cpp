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
 

int thirdLargest(vector<int> nums){

    int first = 0;
    int sec = 0;
    int third = 0;


    for (int i = 0; i < nums.size(); i++)
    {
        if(nums[i] > first)
            first = nums[i];
        
        else if(nums[i] > sec) // since we have already checked for first above
            sec = nums[i];

        else if(nums[i] > third ) // since we have already checked for 2nd above 
            third = nums[i];
    }
}



1. choose median of aray as pivot
2. swap last element with median element 
3. now l = 0 , r = last 2nd element as, last element is pivot
4. compare arr[l] > pivot and arr[r] < pivot , then swap arr[l] , arr[r]
5. l++, r--;
6. while (l<=r)
7. when l == r, swap pivot element back to l or r position ------><------ 
such that all elem right are >, and all elem to left are <
8. Call quicksort on the left sublist.
and choose pivot as r/2(median), where r is the position of overlap previously

repeat the same with moving pivot to the end and quick sorting only left sublist 

if Left sublist contains a single element which means it is sorted.



void partition (vector<int> nums,int left , int right )
{
int pivot = right/2; // calculates median elemenet as pivot 

int l = nums[left];
int r = nums[right];

        while(l<=r)
        {

            if(nums[l] <= nums[pivot])
                l++;

            if(nums[r] >= nums[pivot])
                r--;

            if(nums[l]>nums[pivot] && nums[r]< nums[pivot])
            {   swap(nums[l], nums[r]);
                l++;
                r--;
            }
        }
}

// Using Quick Select or Quick Sort
int KthLargest (vector<int> nums , int k)
{

    int i = 0;
    int j = nums.size()-1;
    int pivot = r/2;
    

    int pi = partition(nums, i , j) /// quick sort entire array in place 
    partition(nums , i , pivot -1); // quick sort left subarray in place
    partition(nums, pivot + 1 , j ); // quick sort rigth subarray in place

    for (int i = 0; i < nums.size(); i++)
    {
        return j; // if j < k-1, if index is less than k-1 th index        
    }


}


int main()
{
    fast_cin();
   // Read an integer representing the number of elements to process

    int n;
    cin >> n; // Read a single integer from standard input

    // Create a vector to store the elements
    vector<int> numbers;
    int result = 0;
    // Loop to read 'n' integers from a single line, separated by spaces
    // cin automatically handles space-separated input by default
    for (int i = 0; i < n; ++i)
    {
        int num;
        cin >> num;             // Read each integer
        numbers.push_back(num); // Add the read number to the vector
    }

    result = NthLargest(numbers);

    cout << result;

        return 0;

}