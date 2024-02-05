/*

Take N as input. Print the sum of its odd placed digits and sum of its even placed digits.

Input Format
Constraints
0 < N <= 1000000000

Output Format
Sample Input
2635
Sample Output
11
5
Explanation
5 is present at 1st position, 3 is present at 2nd position, 6 is present at 3rd position and 2 is present at 4th position.

Sum of odd placed digits on first line. 5 and 6 are placed at odd position. Hence odd place sum is 5+6=11

Sum of even placed digits on second line. 3 and 2 are placed at even position. Hence even place sum is 3+2=5

*/


// ------------APPROACH 2-------------------------
#include <iostream>
using namespace std;

//Function to calculate even and odd placed digits
void sum(int N)
{
    int odd_sum = 0;
    int even_sum = 0;

    //Calculate count of digits & simultaneously calculate sums as well
    int n = N;
    int count = 0;
    int digit;

    while(n!=0)
    {
        digit = n%10;
        n /= 10;
        count++;

        if(count%2==0)
        {
            even_sum += digit;
        }
        else
        {
            odd_sum += digit;
        }
    }
    
    cout<<odd_sum<<endl<<even_sum;
}

int main()
{
    int N;
    cout<<"Enter number : ";
    cin>>N;

    sum(N);
    return 0;
}