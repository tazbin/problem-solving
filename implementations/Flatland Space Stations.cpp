#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, c;
    cin >> n >> c;

    int a[n] = {0};
    int d;

    for( int i=0; i<c; i++ )
    {
        cin >> d;
        a[d] = 1;
    }

    int s = -1;
    d = 0;
    int mid;
    for( int i=0; i<n; i++ )
    {
        if( a[i] == 1 )
        {
            if( s == -1 )
            {
                d = i;
            } else
            {
                mid = s + (i-s)/2;
                if( mid != s && mid != i )
                {
                    if( mid - s > d )
                    {
                        d = mid - s;
                    }
                }
            }

            s = i;
        }
    }

    if( n-1 - s > d )
    {
        d = n-1-s;
    }

    cout << d << endl;
    return 0;

}
