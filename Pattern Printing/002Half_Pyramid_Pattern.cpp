/*

Write a program to print given pattern by taking input N.

Input Format
The first line contains an integer N.

Constraints
Output Format
Display the pattern as result.

Sample Input
5
Sample Output
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5

*/



#include <iostream>
using namespace std;
int main()
{
    int N;
    cout<<"Enter no. of rows : ";
    cin>>N;

    //Iterate (i) rows in [1..n]
    for(int i=1;i<=N;i++)
    {
        //In each iteration,print (i) numbers initialised with (1)
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}