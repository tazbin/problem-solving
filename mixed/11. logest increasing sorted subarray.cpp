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

    int result = -1;
    int c = 1;
    for( int i=1; i<n; i++ )
    {
        if( a[i] > a[i-1] )
        {
            c++;
        } else
        {
            if( c > result )
            {
                result = c;
            }
            c = 1;
        }
    }
    if( c > result )
    {
        result = c;
    }

    cout << result << endl;
    return 0;
}
