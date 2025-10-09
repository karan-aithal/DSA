#include <bits/stdc++.h>
using namespace std;

// favourite singers



int main()
{


    long long num;
    cin >> num;
    vector<long long> vec(num);

    for (int i = 0; i < num; i++)
    {
        cin >> vec[i]; // 1 2  1 2 2
    }

    unordered_map<long long, long long> mpp; // < key ,values >

    // Hash and store each value in Key and count the frequency of that number

    //    frequency map

    long long maxCount = 0;

    // find the largest value/ count of number in frequency map
    // which num appears more times
    for (int j = 0; j < num; j++)
    {
        mpp[vec[j]]++;
        //    retu7ens // mpp[0] -> count of number 0 in vec
        // mpp[1] -> count of number 1 in vec
        // mpp[2] -> count of number 2 in vec .....

        //    vec   count
        //    [1 ]  |  2
        //    [2 ]  |  2
        //    [4 ]  |  1
        //      <-| --
    }

    for (auto i : mpp)
    {
        if (i.second > maxCount)
        {
            maxCount = i.second;
        }
    }
     
    // count how many numbers have maxCount
    long long count_FS= 0;
    for (auto i : mpp)
    {
        if (i.second == maxCount)
        {
            count_FS++;
        } 
        
    }
    cout << "max is : " << count_FS;
}