/*

Take N (number of rows), print the following pattern (for N = 4).

                       1 
                     2 3 2
                   3 4 5 4 3
                 4 5 6 7 6 5 4
Input Format
Constraints
0 < N < 10

Output Format
Sample Input
4
Sample Output                  Rows      Spaces    Numbers   Numbers
            1                    1          3         1        0
		2	3	2                2          2         2        1
	3	4	5	4	3            3          1         3        2
4	5	6	7	6	5	4       |i|       |N-i|      |i|      |i-1|
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
    
    int i,num,number;
    for (i = 1; i <= N; i++)
    {
        for (int j = N-i; j>=1; j--)
        {
            cout<<" ";
        }

        num =i;
        for (int k = 1; k <= i; k++)
        {
            cout<<num;
            num++;
        }
        
        number =2*(i-1);
        for (int x = 2; x<=i; x++)
        {
            cout<<number;
            number--;
        }
        
        cout<<endl;
        
    }
    
}