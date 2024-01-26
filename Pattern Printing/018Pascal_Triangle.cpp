/*

Take as input N, an odd number (>=5) . Print the following pattern as given below for N = 7.

*  ****
*  *
*  *
*******
   *  *
   *  *
****  *
Input Format
Enter value of N ( >=5 )

Constraints
5 <= N <= 99

Output Format
Print the required pattern.

Sample Input
7
Sample Output
*  ****
*  *
*  *
*******
   *  *
   *  *
****  *
Explanation
Catch the pattern for the corresponding input and print it accordingly.

*/







#include <iostream>
using namespace std;
int main()
{
    int N;
    cout<<"Enter no. of rows : ";
    cin>>N;

    int m = N-(N/2);
    for(int i=i;i<=N;i++)
    {
        for(int j=1;j<=N;j++)
        {
            if(i==1 and (j==1 || j>=m))
            {
                cout<<"*";
            }
            else if(i==m)
            {
                cout<<"*";
            }
            else if(i==N and (j<=m || j==N))
            {
                cout<<"*";
            }
            else if((j==1 || j==m) and (i<m and i>1))
            {
                cout<<"*";
            }
            else if((i>m and i<N) and (j==m || j==N))
            {
                cout<<"*";
            }
            
            else
            {
                cout<<" ";
            }

        }
        cout<<endl;
    }
        
}