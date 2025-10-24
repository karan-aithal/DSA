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
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())

void Validsudoku(vector<vector<char>> &board)
{

    // map vs set
    // map => {key:value}
    // set => {value} // only unique valuess

    // map.insert(key,value);
    // set.insert(value);

    // map.count(key); // return 1 if key exists else 0
    // set.count(value); // return 1 if value exists else 0

    vector<unordered_set<char>> rowsValid(9);
    vector<unordered_set<char>> colsValid(9);
    vector<unordered_set<char>> subMatrixValid(9);

    for (int i = 0; i < 9; i++) // row
    {
        for (int j = 0; j < 9; j++)
        {
            char now = board[i][j]; // current char in board
            if (now == '.')
                continue; // skip empty cells

            int subInx = i / 3 * 3 + j / 3; // submatrix index

            // check value already exists in row , col or submatrix sets
            if (rowsValid[i].count(now) || colsValid[j].count(now) || subMatrixValid[subInx].count(now))
            {
                // Check ith rows map if key is
                // Check jth cols map if key is
                // Check subInx th submatrix map if key is
                // if present in any of the above sets return false
                return false;
            }

            // Insert value into respective sets
            rowsValid[i].insert(now); // set.insert(value)
            colsValid[j].insert(now);
            subMatrixValid[subInx].insert(now);
        }
    }
    return true; // return true after inserting and checking all values in sudoku matrix
}

int main()
{
    fast_cin();
    ll t;
    cin >> t;
    fast_cin();
    int n;
    cin >> n;
    vector<int> nums;

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    
    Validsudoku(nums);

    return 0;
}