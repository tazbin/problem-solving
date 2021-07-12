#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string a[n];
    string b[n];
    string s;

    for( int i=0; i<n; i++ )
    {
        cin >> s;
        a[i] = s;
        b[i] = s;
    }

    for( int i=1; i<n-1; i++ )
    {
        for( int j=1; j<n-1; j++ )
        {
            if( a[i][j] > a[i][j-1] && a[i][j] > a[i][j+1] &&
               a[i][j] > a[i-1][j] && a[i][j] > a[i+1][j] )
            {
                b[i][j] = 'X';
            }
        }
    }

    for( int i=0; i<n; i++ )
    {
        cout << b[i] << endl;
    }

    return 0;
}
