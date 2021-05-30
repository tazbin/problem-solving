#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int m, n;
        cin >> m >> n;

        int a[n];
        int f = 0;

        for( int i=0; i<n; i++ )
        {
            cin >> a[i];
        }

        for( int i=0; i<n; i++ )
        {
            for( int j=0; j<n; j++ )
            {
                if( i != j && a[i] + a[j] == m)
                {
                  cout << i+1 << " " << j +1 << endl;
                  f = 1;
                  break;
                }
            }
            if( f )
            {
                break;
            }
        }
    }
    return 0;
}
