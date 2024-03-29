/*

Take N (number of rows), print the following pattern (for N = 3).

    1
  2 3 2
3 4 5 4 3
  2 3 2
    1
Input Format
Constraints
0 < N < 10

Output Format
Sample Input
3
Sample Output
        1
	2	3	2
3	4	5	4	3
	2	3	2
		1
Explanation
Each number is separated from other by a tab.

*/





#include <iostream>
using namespace std;
int main()
{
    int N,n;
    cout<<"Enter no. of rows : ";
    cin>>N;

    for(int i=1;i<=N;i++)
    {
        for(int j=1;j<=N-i;j++)
        {
            cout<<" ";
        }

        n = i;
        for(int k=1;k<=i;k++)
        {
            cout<<n;
            n++;
        }

        n = 2*(i-1);
        for(int x=1;x<=i-1;x++)
        {
            cout<<n;
            n--;
        }

        cout<<endl;
    }

    for(int i=1;i<=N-1;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<" ";
        }

        n = N-i;
        for(int k=1;k<=N-i;k++)
        {
            cout<<n;
            n++;
        }

        n = 2*(N-i-1);
        for(int x=1;x<=N-i-1;x++)
        {
            cout<<n;
            n--;
        }
        cout<<endl;
    }
}