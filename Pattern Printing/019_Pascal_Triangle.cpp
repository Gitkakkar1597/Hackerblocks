/*

Input Format
Single integer N.

Constraints
N <= 10

Output Format
Print pascal triangle.

Sample Input
4
Sample Output
       1
     1   1
   1   2   1
 1   3   3   1
Explanation
Last row has one " "




HINT : PASCAL'S TRIANGLE ELEMENTS ARE OF THE FORM ^NCR where N=rows and R=columns (BINOMIAL EXPANSION)
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

        n=1;
        for(int j=1;j<=i;j++)
        {
            cout<<n<<" ";
            n = n*(i-j)/(j);
        }

        cout<<endl;
    }
}