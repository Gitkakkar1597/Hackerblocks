/*

Take N (number of rows), print the following pattern (for N = 5)
1
2 2
3 0 3
4 0 0 4
5 0 0 0 5

Input Format
There will be an integer in input.

Constraints
0 < N < 100

Output Format
Print the pattern.

Sample Input
5
Sample Output
1  
2	2  
3	0	3    
4	0	0	4  
5	0	0	0	5
Explanation
Each number is separated from other by a tab.If row number is n (>1), total character is n. First and last character is n and rest are 0.

*/





#include <iostream>
using namespace std;
int main()
{
    int N;
    cout<<"Enter no. of rows : ";
    cin>>N;

    if(N>1)
    {
        cout<<1;
        cout<<endl;
    }
    for (int i = 2; i <= N; i++)
    { 
        cout<<i;
        for (int j = 3; j <= i; j++)
        {
            cout<<0;
        }
        cout<<i;
        cout<<endl;
    }
    return 0;
}