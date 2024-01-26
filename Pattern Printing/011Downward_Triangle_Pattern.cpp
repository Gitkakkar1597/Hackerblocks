/*

Write a program to print given pattern by taking input N.

Input Format
The first line contains an integer N.

Constraints
Output Format
Display the pattern as result.

Sample Input
6
Sample Output    Rows   Spaces   Stars
* * * * * *        1       0       6
 * * * * *         2       1       5
  * * * *          3       2       4
   * * *           4       3       3
    * *            5       4       2
     *             6       5       1
                  |i|    |i-1|   |N-i+1|
*/




#include <iostream>
using namespace std;
int main()
{
    int N;
    cout<<"Enter no. of rows : ";
    cin>>N;

    //Iterate 'i' rows in [1,N]
    for(int i=1;i<=N;i++)
    {
        //Print 'i-1' increasing spaces in i^th row/iteration
        for(int j=1;j<=i-1;j++)
        {
            cout<<" ";
        }

        //Print 'N-i+1' stars in decreasing order
        for(int k=N-i+1;k>=1;k--)
        {
            cout<<"*"<<" ";                                        //Extra spaces between consecutive stars
        }

        cout<<endl;
    }
}