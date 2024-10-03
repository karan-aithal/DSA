#include <stdio.h>
#include <iostream>
using namespace std;

static int BS(int arr[], int target, int s, int e)
{

    if (s > e)
        return -1;

    int m = s + (e - s) / 2;         // middle element

    if (arr[m] == target)           // Check if element is in middle
        return m;

    if (target < arr[m])                      // check target on left-side of middle e:m-1
        return BS(arr, target, s, m - 1);

    return BS(arr, target, m + 1, e);         // check target on right-side of middle s:m+1
}

int main()
{
    //int arr[] = {8, 4, 3, 4, 3, 8, 4, 7, 8, 7, 4, 3, 0, 2, 4, 3, 9, 4, 2, 0, 9, 8}; // array
    int arr[] = {1, 2, 3, 4, 27, 46, 73, 88};
    int target = 88; // target to search using Binary Search in an array 

    int s = 0;

    int e = sizeof(arr) / sizeof(arr[0]);

    // int len = *(&arr + 1) - arr;
    //*(&arr + 1) is the address of the next memory location
    // just after the last element of the array

    int pos = BS(arr, target, s, e-1);

    //printf("\n%d\n", &pos);
    cout << pos <<endl;
}