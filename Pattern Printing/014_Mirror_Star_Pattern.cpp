/*

Take N (number of rows - only odd numbers allowed), print the following pattern (for N = 5).

      *
   *  *  *  
*  *  *  *  *  
   *  *  *
      *
Input Format
Constraints
0 < N < 10 (only odd numbers allowed)

Output Format
Sample Input
5
Sample Output
      *
    * * *
  * * * * *
    * * *
      *
Explanation
Each '*' is separated from other by a tab.


*/







#include <iostream>
using namespace std;
int main()
{
    int N;
    cout<<"Enter no. of rows : ";
    cin>>N;

    int m = N-(N/2);

    for(int i=1;i<=m;i++)
    {
        //print (m-i) decreasing spaces
        for(int j=m-i;j>=1;j--)
        {
            cout<<" "<<" ";
        }

        //print (2i-1) increasing asterisks
        for(int k=1;k<=2*i-1;k++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

    for(int i=m+1;i<=N;i++)
    {
        //print (i-m) increasing spaces
        for(int j=1;j<=i-m;j++)
        {
            cout<<" "<<" ";
        }

        //print (2(N-i)+1) decreasing stars
        for(int k=2*(N-i)+1;k>=1;k--)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}