#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

// 1. Pass by reference
// In C++ passing the array by reference without losing the dimension information is probably the safest
// The int** type signature is for raw C-style arrays
// int (&array)[rows][cols]

// 2. Pass by pointer
// The C equivalent of the previous method is passing the array by pointer
// int (*array)[5][10]

// 3. Pass by (value) a pointer to the decayed type
//  int (*array)[10]

// 4.  Pass by pointer to a pointer
//  int *array[10] == int **array

// 5. using a vector<vector<int>>

//
// & is the address-of operator, and can be read simply as "address of"
// * is the dereference operator, and can be read as "value pointed to by"
// *foo == > value pointed by foo po

// // The vect is passed by reference and changes
// made here reflect in main()

// BRUTE FORCE
// SPACE COMPLEXITY -O (M*N)
// TIME COMPLEXITY - O (M*N)
// Uses a seprate array for Col[ ] , and Row[ ]
vector<vector<int>> setZeros(vector<vector<int>> &matrix, int n, int m)
{

    int row[n] = {0};
    int col[m] = {0};

    for (int i = 0; i < n; i++) // Row
    {
        for (int j = 0; j < m; j++) // Column
        {
            if (matrix[i][j] == 0)
            {
                row[i] = 1; // MArk ith rows
                col[j] = 1; // Mark jth columns
            }
        }
    }

    // Finally, mark all (i, j) as 0
    // if row[i] or col[j] is marked with 1.
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
           if (row[i] || col[j]) {
                matrix[i][j] = 0;   // check row or column arrays and mark the matrix
        }
    }
}

// OPTIMAL APPROACH
// SPACE COMPLEXITY - O (M*N)
// TIME COMPLEXITY - O (1)
// Uses a int Col0 = 0 variable and already existing Row[0] and Col[0] to set values
// Space is same

vector<vector<int>> setZeros(vector<vector<int>> &matrix, int n, int m)
{

    //   +-----+-----+-----+-----+
    //   | 1   |  1  |  1  |  1  |
    //   +-----+-----+-----+-----+
    //   | 1   |     |     |     |
    //   +-----+-----+-----+-----+
    //   |  1  |     |     |     |
    //   +-----+-----+-----+-----+

    int Col0 = 1; // 0,0 th element

    // step 1: Traverse the matrix and
    // mark 1st row & col accordingly:

    //           +-----+-----+-----+-----+
    //           | 1   |  1  |  1  |  1  |
    //           +-----+-----+-----+-----+
    //  +-----+
    //   | 1   |
    //   +-----+
    //   | 1   |
    //   +-----+
    //   |  1  |
    //   +-----+

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                matrix[i][0] = 0; // Mark ith row as O

                if (j != 0)
                    matrix[0][j] = 0; // Mark jth column as 0
                else
                    Col0 = 0; //   Mark 0th column as 0
            }
        }
    }

    //     1-----> n-1
    //   +-----+-----+-----+
    //   |     |  0  |  0  |
    //   +-----+-----+-----+
    //   |     |     |     |
    //   +-----+-----+-----+
    //   |     |     |     |
    //   +-----+-----+-----+
    // Step 2: Mark with 0 from (1,1) to (n-1, m-1): for all 1s marked in Step 1

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            if (matrix[i][j] != 0) // check if remaining elements
            {
                if (matrix[i][0] == 0 || matrix[0][j] == 0) // check from above marked and mark all elements of row or col
                    matrix[i][j] = 0;
            }
        }
    }

    // step 3: Finally mark the 1st col & then 1st row:
    if (matrix[0][0] == 0)
    {
        for (int j = 0; j < m; j++) // traverse the entire column
        {
            matrix[0][j] = 0; // mark the entire column
        }
    }

    if (Col0 == 0)
    {
        for (int i = 0; i < n; i++) // traverse the entire row
        {
            matrix[i][0] = 0; // mark the entire column
        }
    }

    return matrix;
}

int main()
{

    // vector<vector<int>> matrix [4][3];
    vector<vector<int>> matrix = {{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};
    int n = matrix.size();    // no. of rows
    int m = matrix[0].size(); // no. of columns
    vector<vector<int>> ans = setZeros(matrix, n, m);
}