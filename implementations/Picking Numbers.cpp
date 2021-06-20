#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    for( int i=0; i<n; i++ )
    {
        cin >> a[i];
    }

    int c;
    int r = -1;

    for( int i=0; i<n; i++ )
    {
        c = 0;
        for( int j=0; j<n; j++ )
        {
            if( a[i] - a[j] <= 1 && a[i] - a[j] >= 0 )
            {
                c++;
            }
        }
        if( c > r )
        {
            r = c;
        }
    }

    cout << r << endl;
    return 0;
}
