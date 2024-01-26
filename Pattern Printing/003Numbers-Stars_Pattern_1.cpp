/*

Take as input N, a number. Print the pattern as given in output section for corresponding input.

Input Format
Enter value of N

Constraints
Output Format
All numbers and stars are Space separated

Sample Input
5
Sample Output
1 2 3 4 5
1 2 3 4 * 
1 2 3 * * *
1 2 * * * * *
1 * * * * * * *

*/



#include <iostream>
using namespace std;
int main()
{
    int N;
    cout<<"Enter no. of rows : ";
    cin>>N;

    // Iterate (i) rows in [1..N]
    for(int i=1;i<=N;i++)
    {
        //print (N-i) numbers
        for(int j=1;j<=N-i+1;j++)
        {
            cout<<j<<" ";
        }

        //print (i-1) stars
        for(int k=1;k<=i-1;k++)
        {
            cout<<"*"<<" ";
        }

        //print (i) stars in range[3..N]
        for(int x=3;x<=i;x++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}