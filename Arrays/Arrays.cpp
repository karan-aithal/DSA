#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
using namespace std;

// _001)_Search_Element

// _002)_Insert_Element

// _003)_Delete_Element

// _004)_Reverse_Array

// _005)_Left_Rotate_Array_by_1

// _006)_Left_Rotate_Array_by_d_(Time_dN)

// _007)_Left_Rotate_Array_by_d_(Time_N)

// _008)_Left_Rotate_Array_by_d_(Time_N)

// _009)_Remove_Duplicates_from_a_sorted_array

// _010)_Remove_Duplicates_from_a_sorted_array

// _011)_Largest_Number

// _012)_Largest_Number

// _013)_Second_Largest_Number

// _014)_Second_Largest_Number

// _015)_Move_All_ZEROs_to_End

// _016)_Move_All_ZEROs_to_End

// Array is Data Structure used to store similar elements consicue

// Array uses 10^7 max size/length globally
// Array uses 10^6 max size/length inside int main()

//
// Access array by address not possible
// stores 0th index element as address of array
// Brute --> Better --> Optimal
//

// Merge Sort / Quick Sort -->

// TimeComplexity TC-> O(N logN)
// SpaceComplexity SC-> O(1)

// 001 SearchElement
int SearchElement(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
            return i;
    }

    return -1;
}

// 002 function will insert element in array
int InsertElement(int arr[], int n, int x, int cap, int pos)
{
    // size of arr is same as cap X
    if (cap == n)
        return n;

    int idx = pos - 1;

    // Shift all elements forward until idx , so we can insert element
    for (int i = n - 1; i >= idx; i--)
    {
        arr[i + 1] = arr[i]; // store prev elem , forward i+1
    }

    // store new elem in idx(pos -1)
    arr[idx] = x;

    // return new size of array
    return n + 1;
}

// 003 function will delete element in array
void DeleteElement(int arr[], int n, int x)
{
    int i = 0;
    // search fro elem x
    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
            break;
    }

    // Shift all elements backwards from idx to n , which delete's element
    for (int j = i; j < n - 1; j++)
    {
        arr[j] = arr[j + 1];
    }
}

// arr[l] = arr[l] + arr[r];   // a = a+b
// arr[r] = arr[l] - arr[r];   // b = a-b
// arr[l] = arr[l] - arr[r];   //  a = a - b
//
//         // OR
//
// a = a ^ b; // a becomes 15 (1111 in binary)
// b = a ^ b; // b becomes 5 (0101 in binary)
// a = a ^ b; // a becomes 10 (1010 in binary)
void swapElem(int arr[], int l, int r)
{
    int temp = arr[l];
    arr[l] = arr[r];
    arr[r] = temp;
}
// 004 function will reverse elements in array
void ReverseArray(int arr[], int n, int start, int end)
{
    // swap elements first and last until we reach the middle

    int l = 0;
    int r = n - 1;

    while (l < r)
    {
        swapElem(arr, l, r);
        l++;
        r--;
    }

    // return arr; // by defualt arr is passed as pointer in C++  so no return or dup required
}


// 009 function will Remove_Duplicates_from_a_sorted_array
int RemoveDuplicates_sorted_array(int arr[], int n)
{
    //  1. Hash Set - Removes duplicate - store in set and get it back to array - unique elements only auto stored in set
    // set<int> UniqueSet;

    // for (int i = 0; i < n; i++)
    // {
    //     UniqueSet.insert(arr[i]);
    // }

    // int k = UniqueSet.size();

    // int j = 0;
    // for (int x : UniqueSet)
    // {
    //     arr[j++] = x;
    // }

    // return k; // return new size of array after removing duplicates

    // 2. Two pointer approach

    int i = 0;

    // 1 1 2 2 2 3 3
    // 1 2 2 2 2 3 3
    //   i   j
    for (int j = 1; j < n; j++)
    {

        // Until you find an element that is not equal to ith element donot increment i
        // if found different element add to ith place
        if (arr[i] != arr[j])
        {
            i++;
            arr[i] = arr[j];
        }
    }

    return i + 1;

    // 3. Use a temp array to store without duplicate -- extra space
}


// 011  Largest_Number
// Pass array to function using pointers
int LargestElementArray(int *arr, int n)
{
    //     Brute Force
    // TC -  NlogN - > sorting
    // SC - O(1)
    // Last element - [n-1] is the largest

    int largest = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
            largest = arr[i];
    }

    return largest; // 1. returns largest element in an array

   
   
    //2.  To return Index of Largest element
    int largeindx = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[largeindx])
            largeindx = i;
    }

    return largeindx;

}

int SecondLargestElementArray(int *arr, int n)
{

    //     BRUTE FORCE
    // TC - NlogN - > sorting,
    // NlogN -> traverse whole array to check for duplicates from end
    // SC - O(N) -> duplicate array
    // TC - N + logN

    //     int largest = arr[n-1]; // store last element of sorted array as largest and second as -1
    //     int second = largest;

    //     for (int i = n-2; i >= 0; i--) // Traverse from last / 2nd last from sorted
    //     {
    //         if (arr[i] != largest)
    //         {
    //              second = arr[i];
    //              break;        // break when reaching 2nd last from end
    //         }
    //     }

    //      BETTER
    // TC - NLogN
    // First pass -> Find Largest -- O(n)
    // Second pass -> find largest but less than previous one (second pass) -- O(n)
    // SC - O(2n)

    int largest = arr[0];
    int second = -1;

    // 1 2 4 7 7 5

    for (int i = 0; i < n; i++) // Traverse an array
    {
        if (arr[i] > largest) // first pass check if element is largest
        {
            second = largest;
            largest = arr[i];

            break; // break when reaching 2nd last from end
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > second && arr[i] != largest) // second pass check if number is != largest, i.e second largest
        {
            second = arr[i];
            break;
        }
    }

    return second;
}

int SecondLargestElement(int *arr, int n)
{
    // OPTIMAL
    // TC - Single Pass (For loop ) ,
    // SC - updates both largest and second simultaneously
    //
    int largest = arr[0];
    int second = -1; // initial must be a -ve / smallest number

    for (int i = 0; i < n; i++) // Traverse the array
    {
        if (arr[i] > largest) // pass check if number is > largest, and also store second largest
        {
            second = largest;
            largest = arr[i];
        }

        else if (arr[i] < largest && arr[i] > second) // check if betwen largest and second
        {
            second = arr[i];
            // second < arr[i] < largest
            // checks if < (less than) largest and (greater) > second
        }
    }

    return second;
}

int SecondSmallestElementArraywithoutSorting(int *arr, int n)
{
    int smallest = arr[0];
    int second = __INT_MAX__; // intial must be a infinte/large number

    for (int i = 0; i < n; i++) // Traverse the array
    {

        if (arr[i] < smallest)
        {
            second = smallest;
            smallest = arr[i];
        }
        else if (arr[i] != smallest && arr[i] < second) // check if it lies between smallest and second
        {
            second = arr[i];
            // smallest < arr[i] < second
            // arr[i] < second
        }
    }
    return second;
}

// check if array is sorted

// Sorting takes NLog N
// 2 4 5 7 8 9
// 5 7 8 9 2 4
void rotate2Left(int *arr, int n, int d)
{
    // temp arr
    // space complexity = size of extra temp array
    // 3 For loops
    // for() - store in temp arr
    // for (d -> n)  - move elements backwards by x   i-d <= d , store dth elem in 0 ..
    // for (d -> n)  - store temp arr

    // InPlace
    // space comlexity = size of

    // Divide and Conquer
    // divide left part and right part from rotate to left by d
    ReverseArray(arr, n, 0, d - 1);
    ReverseArray(arr, n, d, n - 1);
    ReverseArray(arr, n, 0, n - 1);
}

int main()
{
    // int arr[] = {};
    // int size = sizeof(arr) / sizeof(arr[0]);
    // LargestElementArray(arr, size);

    int n = 0;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];
    // int x;
    // cin >> x;
    // SearchElement(arr, size, x);

    int k = RemoveDuplicates_sorted_array(arr, n);

    cout << "The array after removing duplicate elements is " << endl;
    for (int i = 0; i < k; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}