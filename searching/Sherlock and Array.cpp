#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        int f = 0;
        cin >> n;

        if( n == 1 ){
            cin >> n;
            cout << "YES" << endl;
            f++;
        } else {
            int a[n];

            for( int i=0; i<n; i++ )
            {
                cin >> a[i];
                if( i != 0 )
                {
                    a[i] += a[i-1];
                }
            }

            for( int i=0; i<n; i++ )
            {
                if( i==0 && a[n-1] - a[0] == 0 )
                {
                    cout << "YES" << endl;
                    f++;
                    break;
                } else if( i==n-1 && a[n-1] - a[0] == 0 )
                {
                    cout << "YES" << endl;
                    f++;
                    break;
                } else if( a[n-1] - a[i] == a[i-1] )
                {
                    cout << "YES" << endl;
                    f++;
                    break;
                }
            }
        }
        if( f == 0 )
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
