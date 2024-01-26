/*

You will be given a number N. You have to code a hollow diamond looking pattern.

Input Format
The input has only one single integer N.

Constraints
Output Format
Output the given pattern.

Sample Input
5
Sample Output
*********
**** ****
***   ***
**     **
*       *
**     **
***   ***
**** ****
*********

Explanation
Write a code to print above given pattern. No space between any two characters.

*/

#include <iostream>
using namespace std;
int main()
{
    int N;
    cout << "Enter no. of rows : ";
    cin >> N;

    int n = (2 * N) - 1;

    // print 'N' stars
    for (int i = 1; i <= n; i++)
    {
        cout << "*";
    }
    cout << endl;

    // Iterate till mid rows
    for (int k = 1; k <= N - 2; k++)
    {
        // print stars
        for (int a = N - k; a >= 1; a--)
        {
            cout <<"*";
        }

        // print spaces
        for (int b = 1; b <= 2 * k - 1; b++)
        {
            cout <<" ";
        }

        // print stars
        for (int c = N - k; c >= 1; c--)
        {
            cout <<"*";
        }

        cout << endl;
    }

    // Iterate other half rows
    for (int x = 1; x <= N-1; x++)
    {
        // print stars
        for (int a = 1; a <= x; a++)
        {
            cout << "*";
        }

        // print spaces
        for (int b = n - (2 * x); b >= 1; b--)
        {
            cout << " ";
        }

        // print stars
        for (int c = 1; c <= x; c++)
        {
            cout << "*";
        }

        cout << endl;
    }

    // print 'N' stars
    for (int i = 1; i <= n; i++)
    {
        cout << "*";
    }
    cout << endl;
}