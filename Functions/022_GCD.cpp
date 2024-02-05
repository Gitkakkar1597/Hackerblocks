/*

Take the following as input.

A number (N1)
A number (N2)
Write a function which returns the GCD of N1 and N2. Print the value returned.

Input Format
Two integers seperated by a new line.

Constraints
0 < N1 < 1000000000
0 < N2 < 1000000000

Output Format
Output a single integer which is the GCD of the given integers.

Sample Input
16 
24
Sample Output
8
Explanation
The largest number that divides both N1 and N2 is called the GCD of N1 and N2.

*/

#include <iostream>
using namespace std;

//Function to calculate GCD of two integers
int gcd(int N1,int N2)
{
    int ans = min(N1,N2);
    while(true)
    {
        if(N1%ans==0 and N2%ans==0)
        {
            return ans;
        }
        ans--;
    }
}

int main()
{
    int N1;
    cout<<"Enter first number : "<<endl;
    cin>>N1;

    int N2;
    cout<<"Enter second number : "<<endl;
    cin>>N2;

    cout<<gcd(N1,N2);
    return 0;
}