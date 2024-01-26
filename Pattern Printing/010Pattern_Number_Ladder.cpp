/*

Take N (number of rows), print the following pattern (for N = 4)

1
2 3
4 5 6
7 8 9 10

Input Format
Constraints
0 < N < 100

Output Format
Sample Input
4
Sample Output
1  
2	3  
4	5	6  
7	8	9	10
Explanation
Each number is separated from other by a tab.

*/



#include <iostream>
using namespace std;
int main()
{
    int N;
    cout<<"Enter no. of rows : ";
    cin>>N;

    int num=1;
    for(int i=1;i<=N;i++)
    {

        for(int j=1;j<=i;j++)
        {
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
}