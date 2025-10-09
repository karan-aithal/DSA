#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Functions are used to modularize code
// every step is a separate function
// Reuse code by calling functions
// void -> no return value

// Arrays -> // passed by reference by default ✅
// vectors -> // ❌ unless & used
// maps -> // ❌ unless & used
// lists -> // ❌ unless & used

// | Type           | C++ (default)                      | C# (default)                                       |
// | -------------- | ---------------------------------- | -------------------------------------------------- |
// | Array          | Passed as pointer (reference-like) | Reference type, passed by value (reference copied) |
// | Vector/List    | Passed by value                    | Reference type, passed by value (modifiable)       |
// | Map/Dictionary | Passed by value                    | Reference type, passed by value (modifiable)       |

// C++ uses pass by reference for arrays and objects and pass by value for primitive types

// void modifyArray(int arr[]) // Passed as pointer (reference-like)
// void modifyVector(std::vector<int> v) // Passed by value (copy)
// void modifyVectorRef(std::vector<int>& v) // Passed by reference (no copy)

// C# uses pass by value for reference types, but the reference itself is passed by value

// void ModifyArray(int[] arr) // Can change elements, not the reference
// void ModifyList(List<int> list) // Can add/remove elements
// void ReplaceList(ref List<int> list) // Can reassign the list

void passByValue(int a, int b)
{
    a + b;
    a = 20; // This change will not affect the original variable
}

void passByReference(int &a, string &b, int num[], vector<int> &v)
{
    a = 30; // This change will affect the original variable
    // Array is passed by reference by default ✅
}

void modifyAll(std::vector<int> v,      // pass-by-value
               std::vector<int> &v_ref, // pass-by-reference
               std::vector<int> *v_ptr) // pass-by-pointer
{
    v.push_back(10);     // local copy modified
    v_ref.push_back(20); // modifies caller's original
    if (v_ptr)
        v_ptr->push_back(30); // modifies caller's via pointer
}

int main()
{
    int x = 10;
    int y = 20;
    string z = "Hello";
    int arr[] = {1, 2, 3, 4, 5};

    vector<int> vec = {1, 2, 3};

    cout << "Before passByValue: " << x << endl;
    passByValue(x, y);
    cout << "After passByValue: " << x << endl; // x remains 10

    cout << "Before passByReference: " << x << endl;
    passByReference(x, z, arr, vec);
    cout << "After passByReference: " << x << endl; // x is now 30


    std::vector<int> a = {1, 2, 3}; // vector a
    std::vector<int> copy = a;
    std::vector<int> &ref = a;
    std::vector<int> *ptr = &a;

    modifyAll(copy, ref, ptr);
    
    
// | Mechanism         | Function Signature | Call Site Syntax |
// | ----------------- | ------------------ | ---------------- |
// | Pass-by-value     | `void f(int x)`    | `f(a)`           |
// | Pass-by-reference | `void f(int& x)`   | `f(a)` ✅       |
// | Pass-by-pointer   | `void f(int* x)`   | `f(&a)` ✅      |
//


    return 0;
}