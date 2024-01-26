/*

Take N as input. For a value of N=7, we wish to draw the following pattern :

            1 
        2 1   1 2 
    3 2 1       1 2 3 
4 3 2 1           1 2 3 4 
    3 2 1       1 2 3 
        2 1   1 2 
            1 
Input Format
Take N as input.

Constraints
N is odd number.

Output Format
Pattern should be printed with a space between every two values.

Sample Input
7
Sample Output
            1 
        2 1   1 2 
    3 2 1       1 2 3 
4 3 2 1           1 2 3 4 
    3 2 1       1 2 3 
        2 1   1 2 
            1 
Explanation
Catch the pattern and print it accordingly.

*/





#include <iostream>
using namespace std;
int main()
{
    int N,m,n;
    cout<<"Enter no. of rows :";
    cin>>N;

    m = N-(N/2);
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=2*(m-i);j++)
        {
            cout<<" ";
        }

        n = i;
        for(int j=1;j<=i;j++)
        {
            cout<<n;
            n--;
        }

        if(i>=2)
        {
            for(int j=1;j<=2*i-m+1;j++)
            {
                cout<<" ";
            }

            n=1;
            for(int j=1;j<=i;j++)
            {
                cout<<n;
                n++;
            }
        }

        cout<<endl;
    }

    for(int i=1;i<=m-1;i++)
    {
        for(int j=1;j<=2*i;j++)
        {
            cout<<" ";
        }

        n = m-i;
        for(int j=1;j<=m-i;j++)
        {
            cout<<n;
            n--;
        }

        if(i!=m-1)
        {
            for(int j=1;j<=m+1-2*i;j++)
            {
                cout<<" ";
            }

            n = 1;
            for(int j=1;j<=m-i;j++)
            {
                cout<<n;
                n++;
            }
        }

        cout<<endl;
    }
}