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

    for( int i=1; i<n; i++ )
    {
        int k = i;
        while(k)
        {
            if( a[k-1] > a[k] )
            {
                int t = a[k-1];
                a[k-1] = a[k];
                a[k] = t;
            }
            k--;
        }
    }

    for( int i=0; i<n; i++ )
    {
        cout << a[i] << " ";
    }
    return 0;
}
