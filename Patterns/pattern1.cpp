#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


// * * * * *
// * * * * *
// * * * * *
// * * * * *
// * * * * *
void printPattern1(int row)
{

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {

            cout << "* ";
        }

        cout << endl;
    }
}


// *
// * *
// * * *
// * * * *
// * * * * *
void printPattern2(int row)
{

    for (int i = 0; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}


// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
void printPattern3(int row)
{

    for (int i = 0; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}


// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5
void printPattern4(int row)
{

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}


// * * * * *
// * * * *
// * * *
// * *
// *
void printPattern5(int row)
{
    for (int i = 1; i <= row; i++)
    {
        for (int j = 0; j < row - i + 1; j++)
        {

            cout << "* ";
        }
        cout << endl;
    }
}


// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1
void printPattern6(int row)
{

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row - i + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}


//      *
//     ***
//    *****
//   *******
//  *********
void printPattern7(int row)
{

    for (int i = 1; i <= row; i++)
    {

        // space
        for (int j = 1; j <= row - i + 1; j++)
        {
            cout << " ";
        }

        // stars
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }

        // space
        for (int j = 1; j <= row - i + 1; j++)
        {
            cout << " ";
        }

        cout << endl;
    }
}


// *********
//  *******
//   *****
//    ***
//     *
void printPattern8(int row)
{
    cout << endl;
    for (int i = 1; i <= row; i++)
    {
        // space
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }

        // star
        for (int j = 0; j < 2 * row - (2 * i - 1); j++)
        {
            cout << "*";
        }

        // space
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }

        cout << endl;
    }
}


//     *
//    ***
//   *****
//  *******
// *********
// *********
//  *******
//   *****
//    ***
//     *
void printPattern9(int row)
{
    // Upper Triangle
    for (int i = 1; i <= row; i++)
    {
        // space
        for (int j = 1; j <= row - i; j++)
        {
            cout << " ";
        }

        // star
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }

        // space
        for (int j = 1; j <= row - i; j++)
        {
            cout << " ";
        }

        cout << endl;
    }

    // Lower Triangle
    for (int i = 1; i <= row; i++)
    {
        // space
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }

        // star
        for (int j = 0; j < 2 * row - (2 * i - 1); j++)
        {
            cout << "*";
        }

        // space
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}


// *
// * *
// * * *
// * * * *
// * * * * *
// * * * *
// * * *
// * *
// *
void printPattern10(int row)
{
    for (int i = 1; i <= 2 * row - 1; i++)
    {
        // upper half
        int stars = i;

        // lower half
        if (i > row)
            stars = 2 * row - i;

        for (int j = 1; j <= stars; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}


// 0
// 10
// 010
// 1010
void printPattern11(int row)
{

    for (int i = 0; i < row; i++)
    {
        int start = 0;

        // if even value is 0 else 1
        if (i % 2 == 0)
            start = 1;
        else
            start = 0;

        for (int j = 0; j < i; j++)
        {
            cout << start;
            start = 1 - start;
            // toggle 1 => 0, 0 => 1 within a row
        }

        cout << endl;
    }
}


// 1        1
// 12      21
// 123    321
// 1234  4321
// 1234554321
void printPattern12(int row)
{
    int space = 2 * (row - 1);

    for (int i = 1; i <= row; i++)
    {
        // int space = 2*(row-1);
        // numbers
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        // space
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }

        // numbers
        //  reverse order
        //   spaces below will handle orientation
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;

        space -= 2; // decrement spaces by 2 as number increase to orient.
    }
}



// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15 
void printPattern13(int row)
{
    int count = 1;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}



// A
// AB
// ABC
// ABCD
// ABCDE
void printPattern14(int row)
{
    for (int i = 0; i < row; i++)
    {
       char ch = 'A';
       for (int j = 0; j <=i; j++)
       {
        
            cout<<ch;
            ch++;
       }
       
       cout<<endl;
    }
}



// ABCDE
// ABCD
// ABC
// AB
// A
void printPattern15(int row)
{
    for (int i = 0; i < row; i++)
    {
    //    char ch = 'A';
    //    for (int j = 1; j < row-i+1; j++)
    //    {
        
    //         cout<<ch;
    //         ch++;
    //    }

       for (char ch = 'A'; ch <= 'A'+ (row-i-1); ch++)
       {
            cout<<ch<<" ";
        
       }
       
       cout<<endl;
    }
}




// A
// BB
// CCC
// DDDD
// EEEEE
void printPattern16(int row)
{
    for (char ch = 'A'; ch <= 'A'+row-1; ch++)
    {       
        for (int j = 'A'; j <=ch; j++)       // IMPLICIT CONVERSION !!!
        {
            cout<<ch;
        }
        cout<<endl;
    }
}




//     A    
//    ABA   
//   ABCBA  
//  ABCDCBA 
// ABCDEDCBA
void printPattern17(int row)
{
    
    for (int i = 0; i <row; i++)
    {       
        char ch = 'A';
        
        //space
        for (int j = 0; j <row-i-1; j++)
        {
            cout<<" ";
        }

        //char

        int breakpoint = (2*i+1)/2;
         // rounds off to lowest number 1/2 = 0 ,3/2 = 1  5/2 = 2 , 7/2 = 3
        // half-way of print characters is breakpoint
        // after which we decrementc ch

        for (int j = 1; j <=2*i+1; j++)
        {
            cout<<ch;
            
            if(j<=breakpoint)
            ch++;
            
            else
            ch--;
        }

       //space
        for (int j = 0; j <row-i-1; j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }

}



// E
// DE
// CDE
// BCDE
// ABCDE
void printPattern18(int row)
{   
    for (int i = 0; i < row; i++)
    {
        
        for (char ch='A'+row-1-i; ch <'A'+row ; ch++)  
        {
            // From Value A+5-1-0 => E , i=0
            //            A+5-1-1 => D , i=1
            //            A+5-1-2 => C
            //            A+5-1-3 => B  
            //            A+5-1-4 => A
            cout<<ch;
        }
        cout<<endl;
    }
}





int main()
{
    int row;
    int col;

    cout << "Enter row: " << endl;
    cin >> row;

    // cout << "Enter column" << endl;
    // cin >> col ;

    // printPattern1(row);

    // printPattern2(row);

    // printPattern3(row);

    cout << endl;

    // printPattern4(row);

    // printPattern5(row);

    // printPattern6(row);

    // printPattern7(row);

    // printPattern8(row);

    // printPattern9(row);

    // printPattern10(row);

    // printPattern11(row);

    // printPattern12(row);

    // printPattern13(row);

    // printPattern14(row);

    //  printPattern15(row);
     
    // printPattern16(row);
    
   //  printPattern17(row);
    
     printPattern18(row);
   
    // printPattern19(row);

    // printPattern20(row);
    
    // printPattern21(row);
    
    // printPattern22(row);
    
    return 0;
}