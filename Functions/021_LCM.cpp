/*

Take the following as input.

A number (N1)
A number (N2)
Write a function which returns the LCM of N1 and N2. Print the value returned.

Input Format
Constraints
0 < N1 < 1000000000
0 < N2 < 1000000000

Output Format
Sample Input
4
6
Sample Output
12
Explanation
The smallest number that is divisible by both N1 and N2 is called the LCM of N1 and N2.

*/

#include <iostream>
using namespace std;

// function to calculate LCM of two integers
int lcm(int N1, int N2)
{
    int max_num = max(N1, N2);

    while (true)
    {
        if ((max_num % N1 == 0) and (max_num % N2 == 0))
        {
            return max_num;
        }
        max_num++;
    }
}

int main()
{
    int N1;
    cout << "Enter first number : " << endl;
    cin >> N1;

    int N2;
    cout << "Enter second number : " << endl;
    cin >> N2;

    cout << lcm(N1, N2);

    return 0;
}