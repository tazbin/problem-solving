#include <bits/stdc++.h>
using namespace std;

void printInSpiral(int A[][5], int row, int col)
{
    int t = 0;
    int b = row - 1;
    int l = 0;
    int r = col - 1;

    int dir = 0;

    while( t <= b && l <= r )
    {
        if( dir == 0 ) // left to right
        {
            for( int i=l; i<=r; i++ )
            {
                cout << A[t][i] << " ";
            }
            t++;
            dir = 1;
            cout << endl;
        } else if( dir == 1 ) // top to bottom
        {
            for( int i=t; i<=b; i++ )
            {
                cout << A[i][r] << " ";
            }
            r = r-1;
            dir = 2;
            cout << endl;
        } else if( dir == 2 ) // right to left
        {
            for( int i=r; i>=l; i-- )
            {
                cout << A[b][i] << " ";
            }
            b = b-1;
            dir = 3;
            cout << endl;
        } else if( dir == 3 ) // bottom to up
        {
            for( int i=b; i>=t; i-- )
            {
                cout << A[i][l] << " ";
            }
            l++;
            dir = 0;
            cout << endl;
        }
    }
}

int main()
{
    int A[5][5] = {{1,2,3,4,5}, {1,2,3,4,5}, {1,2,3,4,5}, {1,2,3,4,5}, {1,2,3,4,5}};
    printInSpiral(A, 5, 5);

    return 0;
}
