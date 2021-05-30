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
        if( i!=0 )
        {
            a[i] += a[i-1];
        }
    }

    int eIndex = -1;
    for( int i=0; i<n; i++ )
    {
        if( i == 0 && a[n-1]-a[i] == 0 )
        {
            eIndex = i;
            break;
        }else if( i == n-1 && a[i-1] == 0 )
        {
            eIndex = i;
            break;
        }else if( a[i-1] == ( a[n-1] - a[i] ) )
        {
            eIndex = i;
            break;
        }
    }

    cout << eIndex << endl;
    return 0;
}
