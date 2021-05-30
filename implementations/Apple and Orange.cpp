#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s,t,a,b,m,n;
    int apple = 0, orange = 0;
    int d;

    cin >> s >> t >> a >> b >> m >> n;

    for( int i=0; i<m; i++ )
    {
        cin >> d;
        if( d > 0 && a+d >= s && a+d <= t ) {
            apple++;
        }
    }

    for( int i=0; i<n; i++ )
    {
        cin >> d;
        if( d < 0 && b+d >= s && b+d <= t ) {
            orange++;
        }
    }

    cout << apple << endl << orange << endl;
    return 0;
}
