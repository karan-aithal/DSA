#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
using namespace std;

void solve() {

    // BF => divide current index to  and left prefix array and right suiffix array
    // [left array] -- i --- [right array] // left and right max with while(lp < i) , while(rp < i) 

    // Optimal -- 
    // 
    int lp = 0;
    int rp = n-1;
    int rightMax , leftMax = 0;

    int waterstr = 0;
    for (int i = 0; i < n; i++)
    {   
        while (lp <= rp)
        {
            if (arr[lp] <= arr[rp]) {  // if lp val is small

                if(arr[lp]> = leftMax)
                    leftMax = arr[lp];

                lp++;
            
            }
            
            
            if (arr[lp] >= arr[rp]) // lp val is greater 
            {
                if(arr[rp]>= rightMax)
                    rightMax = arr[rp];

                rp--;

            }


        }

        waterstr = min(max lp, max rp) - arr[i] // 1, 3  2, 3

    }
    

    
}


// Array of elevation with y axis values 
// [ 0   1   0   2   1   0  1   3   2   1    2   1]
// calc all empty space water can be stored within the elevations
//   .                                                  
//   -                                                  
//   -                                                  
//   -                               ====:                
//   -                              @@@@:                
//   -                              @@@@:                
//   -             #@@@%++++++++++++@@@@@@@@#+++%@@@%    
//   -             #@@@%++++++++++++@@@@@@@@#+++%@@@%    
//   -    .@@@@*+++%@@@@@@@@+++*@@@@@@@@@@@@@@@@@@@@@@@@@
//   -    .@@@@*+++%@@@@@@@@+++*@@@@@@@@@@@@@@@@@@@@@@@@@
//  ....................................................
//     0    1   0   2    1   0   1  3   2   1   2   1
//   
 //   ans = 6 blocks of water (+++)


int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;     cin >> t;
    while (t--)
    {
        // Input for array ,number etc...

        solve();
        // Call solve or simillar function with args

        return 0;
    }
}