/*

Given N, help Manmohan to print pattern upto N lines. For eg For N=6 , following pattern will be printed.

1
11
111
1001
11111
100001

Input Format
Single number N.

Constraints
N<=1000

Output Format
Pattern corresponding to N.

Sample Input
6
Sample Output
1 
11
111 
1001 
11111
100001
Explanation
For every odd number row print 1, odd number of times and for every even number row , print first and last character as 1 and rest of middle characters as 0.

*/



#include <iostream>
using namespace std;
int main()
{
    int N;
    cout<<"Enter no. of rows : ";
    cin>>N;

    //Iterate (i) rows in range[1..N]
    for(int i=1;i<=N;i++)
    {
        //odd row
        if(i%2 == 1)
        {
            //print (1) 'i' times
            for(int j=1;j<=i;j++)
            {
                cout<<1<<" ";
            }
        }

        //even row
        else
        {
            //print '1' first & last and '0' in mid
            cout<<1<<" ";
            for(int j=1;j<=i-2;j++)
            {
                cout<<0<<" ";
            }
            cout<<1<<" ";
        }
        cout<<endl;  
    }
    return 0;
}