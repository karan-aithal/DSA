#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

// generate a pascal triangle with array of arrays 
// example 1: 
// Input: numRows = 5
// Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]
//  each number is the sum of the two numbers directly above it 

//           1
//         1   1
//        1  2  1
//      1   3 3   1
//     1   4 6 4   1
//    1  5 10 10 5  1

// 1. Find the value at R and C of the given Ttriangle
// Combination formula 
//   nCr  r-1  C  c-1
// 
//    C(n,r) = n! / (r! * (n−r)!)  
//    C(r-1,c-1)  = (r-1)! / (c-1)! * (r-1−c+1)!)
//                = (r-1)! / (c-1)! * (r−c)!)
// if n = 7 , 7 * (7-1) / r (r-1)(r-1)..







int C = 1;

vector<vector<int>> FindvalueatRC(int row , int col)
{
    for (int i = 0; i < row; i++)
    {
        C = C * (row - i);  // n! = (r-1)! =  (r-1) * (r-2) * (r-3) * (r-4).....
        C = C / (i+ 1);    // r!(n-r)! = (c-1)! (r−c)!

    }


}






vector<vector<int>> generate(int numRows)
{
    for (int i = 0; i < numRows; i++)
    {
        for (int j = 0; j < numRows; j++)
        {
            
        }
    }
}


int main()
{

   
}