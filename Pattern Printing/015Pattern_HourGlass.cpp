/*

Take N as input. For a value of N=5, we wish to draw the following pattern :

5 4 3 2 1 0 1 2 3 4 5
  4 3 2 1 0 1 2 3 4 
    3 2 1 0 1 2 3 
      2 1 0 1 2 
        1 0 1 
          0 
        1 0 1 
      2 1 0 1 2 
    3 2 1 0 1 2 3 
  4 3 2 1 0 1 2 3 4 
5 4 3 2 1 0 1 2 3 4 5
Input Format
Take N as input.

Constraints
N <= 20

Output Format
Pattern should be printed with a space between every two values.

Sample Input
5
Sample Output
 5 4 3 2 1 0 1 2 3 4 5
   4 3 2 1 0 1 2 3 4 
     3 2 1 0 1 2 3 
       2 1 0 1 2 
         1 0 1 
           0 
         1 0 1 
       2 1 0 1 2 
     3 2 1 0 1 2 3 
   4 3 2 1 0 1 2 3 4 
 5 4 3 2 1 0 1 2 3 4 5

*/




#include <iostream>
using namespace std;
int main()
{
    int N;
    cout<<"Enter no. of rows : ";
    cin>>N;

    int n1,n2 ;

    for(int i=1;i<=N+1;i++)
    {
        for(int j=1;j<=i-1;j++)
        {
            cout<<" ";
        }

        n1 = N-i+1;
        for(int k=1;k<=N-i+2;k++)
        {
            cout<<n1;
            n1--;
        }

        n2 = 1;
        for(int x=1;x<=N-i+1;x++)
        {
            cout<<n2;
            n2++;
        }
        cout<<endl;
    }

    for(int i=1;i<=N;i++)
    {
        for(int j=1;j<=N-i;j++)
        {
            cout<<" ";
        }

        n1=i;
        for(int k=1;k<=i;k++)
        {
            cout<<n1;
            n1--;
        }
        
        n2=0;
        for(int x=1;x<=i+1;x++)
        {
            cout<<n2;
            n2++;
        }
        
        cout<<endl;

    }

}