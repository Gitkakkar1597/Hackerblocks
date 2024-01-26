/*

Write a program to print square pattern by taking input N.

Input Format
The first line contains an integer N.

Constraints
Output Format
Display the pattern as result.

Sample Input
5
Sample Output
                Rows  Numbers  Numbers   
1  2 3 4 5        1      1       4
2 2  3 4 5        2      2       3
3 3 3  4 5        3      3       2
4 4 4 4  5        4      4       1
5 5 5 5 5         5      5       0
                |i|     |i|    |n-i|
*/ 


#include <iostream>
using namespace std;
int main()
{
    int N;
    cout<<"Enter no. of rows: ";
    cin>>N;

    // Iterate (i) rows in range[1..n]
    for(int i=1;i<=N;i++)
    {
        //print (i) numbers in range[1..i] 
        int num;
        for(int j=1;j<=i;j++)
        {
            //In each row,print (i), (i) times
            num=i;
            cout<<num<<" ";
        } 
        num++;

        //print (n-i) numbers in range[1..n-i]
        int number=i+1;
        for(int k=1;k<=N-i;k++)
        {
            cout<<number<<" ";
            number++;
        }

        cout<<endl;
    }
    return 0;
}