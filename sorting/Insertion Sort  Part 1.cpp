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

    int v = a[n-1];
    int f = 0;

    for( int i = n-2; i>=0; i-- )
    {
        if( a[i] > v )
        {
            a[i+1] = a[i];
            for( int k=0; k<n; k++ )
            {
                cout << a[k] << " ";
            }
            cout << endl;
        } else
        {
            a[i+1] = v;
            f++;
            for( int k=0; k<n; k++ )
            {
                cout << a[k] << " ";
            }
            cout << endl;
            break;
        }
    }

    if( !f )
    {
        a[0] = v;
        for( int k=0; k<n; k++ )
            {
                cout << a[k] << " ";
            }
            cout << endl;
    }
    return 0;

}
