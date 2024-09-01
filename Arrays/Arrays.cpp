#include <stdio.h>

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

// Pass array to function using pointers 
int LargestElementArray(int* arr, int n)
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

    return largest;
}




int SecondLargestElementArray(int* arr, int n)
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
    if ( arr[i] > largest ) // first pass check if element is largest
       {      
            second = largest;  
            largest = arr[i];      
           
           break;        // break when reaching 2nd last from end  
       }      
}

for (int i = 0; i < n; i++)
{
    if ( arr[i] > second && arr[i] != largest) // second pass check if number is != largest, i.e second largest
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
        if ( arr[i] > largest ) // pass check if number is > largest, and also store second largest
            {
                second = largest;
                largest = arr[i]; 
            }

        else if (arr[i] < largest && arr[i] > second)  // check if betwen largest and second
            {
                second = arr[i];                
                // second < arr[i] < largest 
                // checks if < (less than) largest and (greater) > second
            }
    }

    return second;
}


int SecondSmallestElementArraywithoutSorting(int* arr, int n)
{
    for (int i = 0; i < n; i++) // Traverse the array
    {
        int smallest = arr[0];
        int second = __INT_MAX__;  // intial must be a infinte/large number 

        if (arr[i] < smallest)
        {      
            second = smallest;
            smallest = arr[i];                
        }
        else if(arr[i] != smallest && arr[i] < second) // check if it lies between smallest and second
        {
            second  = arr[i];
            // smallest < arr[i] < second
            // arr[i] < second 
        }        
    }
}


//check if array is sorted 



// Sorting takes NLog N 
// 2 4 5 7 8 9
// 5 7 8 9 2 4
int rotate2Left(int* arr, int n)
{
    // temp arr
    // space complexity = size of extra temp array


    // InPlace
    // space comlexity = size of 
}


int main()
{
    int arr[] = {};
    int size = sizeof(arr)/ sizeof(arr[0]);
    LargestElementArray(arr,size);

    return 0;
}