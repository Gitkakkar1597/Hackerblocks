/*

Given number of rows N, you have to print a Hollow Rhombus. See the output for corresponding given input.

Input Format
Single integer N.

Constraints
N <= 20

Output Format
Print pattern.

Sample Input
5
Sample Output
    *****
   *   *
  *   *
 *   *
*****
Explanation
For any input N. First line contains 4 space and then 5 {*} and then the second line contains according to the output format.

*/




#include <iostream>
using namespace std;
int main()
{
    int N;
    cout<<"Enter no. of rows : ";
    cin>>N;

    //Iterate (i) rows in [1,N]
    for(int i=1;i<=N;i++)
    {
        //print (i) spaces
        for(int j=1;j<=N-i;j++)
        {
            cout<<" ";
        }

        for(int j=1;j<=N;j++)
        {
            if(i==1 || i==N || j==1 || j==N)
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