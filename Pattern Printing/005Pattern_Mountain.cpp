/*

Take N (number of rows), print the following pattern (for N = 4).

1           1
1 2       2 1
1 2 3   3 2 1
1 2 3 4 3 2 1
Input Format
Constraints
0 < N < 10

Output Format
Sample Input
4
Sample Output                  Row   Numbers  Spaces      Numbers
1						1       1       1        5           1
1	2				2	1       2       2        3           2
1	2	3		3	2	1       3       3        1           3
1	2	3	4	3	2	1       4       4        0           4
                               |i|     |i|   |2(N-i)-1|     |i|
*/



#include <iostream>
using namespace std;
int main() {
    int N;
    cout << "Enter no. of rows : ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        // Print increasing numbers
        for (int j = 1; j <= i; j++) {
            cout << j;
        }

        // Print spaces
        for (int k = 1; k <= 2 * (N - i)-1; k++) {
            cout << " ";
        }

        // Print decreasing numbers
        for (int x = i; x >= 1; x--) 
        {
            if(x!=N)                                      //avoid repetition in last row
            {
                cout << x;
            }
        }
        cout << endl;
    }

    return 0;
}






