/*

Take N as input. For a value of N=5, we wish to draw the following pattern :

             5                   5 
             5 4               4 5 
             5 4 3           3 4 5 
             5 4 3 2       2 3 4 5 
             5 4 3 2 1   1 2 3 4 5 
             5 4 3 2 1 0 1 2 3 4 5 
             5 4 3 2 1   1 2 3 4 5 
             5 4 3 2       2 3 4 5 
             5 4 3           3 4 5 
             5 4               4 5 
             5                   5 
Input Format
Take N as input.

Constraints
Output Format
Pattern should be printed with a space between every two values.

Sample Input
5
Sample Output
5                   5 
5 4               4 5 
5 4 3           3 4 5 
5 4 3 2       2 3 4 5 
5 4 3 2 1   1 2 3 4 5 
5 4 3 2 1 0 1 2 3 4 5 
5 4 3 2 1   1 2 3 4 5 
5 4 3 2       2 3 4 5 
5 4 3           3 4 5 
5 4               4 5 
5                   5 

*/






#include <iostream>
using namespace std;
int main()
{
    int N,n;
    cout<<"Enter no. of rows : ";
    cin>>N;


    //Upward Pattern
    for(int i=1;i<=N;i++)
    {
        n = N;
        for(int j=1;j<=i;j++)
        {
            cout<<n;
            n--;
        }

        for(int j=1;j<=2*(N-i)+1;j++)
        {
            cout<<" ";
        }

        n = N-i+1;;
        for(int j=1;j<=i;j++)
        {
            cout<<n;
            n++;
        }

        cout<<endl;
    }

    //Mid Pattern
    for(int i=1;i<=N;i++)
    {
        cout<<N-i+1;
    }
    for(int i=0;i<=N;i++)
    {
        cout<<i;
    }
    cout<<endl;

    // Downward Pattern
    for(int i=1;i<=N;i++)
    {
        n = N;
        for(int j=1;j<=N-i+1;j++)
        {
            cout<<n;
            n--;
        }

        for(int j=1;j<=2*i-1;j++)
        {
            cout<<" ";
        }

        n = i;
        for(int j=1;j<=N-i+1;j++)
        {
            cout<<n;
            n++;
        }

        cout<<endl;
    }
}