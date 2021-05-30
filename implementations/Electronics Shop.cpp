#include <bits/stdc++.h>
using namespace std;

int main()
{
    int b, x, y;
    cin >> b >> x >> y;

    int k[x];
    int u[y];
    int m = -1;

    for( int i=0; i<x; i++ )
    {
        cin >> k[i];
    }

    for( int j=0; j<y; j++ )
    {
        cin >> u[j];
    }

    for( int i=0; i<x; i++ )
    {
        for( int j=0; j<y; j++ )
        {
            if( k[i] + u[j] <= b && k[i] + u[j] > m )
            {
                m = k[i] + u[j];
            }
        }
    }
    cout << m << endl;
    return 0;
}
