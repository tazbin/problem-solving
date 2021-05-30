#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, q;
    cin >> n >> k >> q;

    int arr[n];
    int arr2[n];
    int query[q];
    int p;

    for( int i=0; i<n; i++ )
    {
        cin >> arr[i];
    }

    for( int i=0; i<q; i++ )
    {
        cin >> query[i];
    }

    if( k >= n )
    {
        k = k % n;
    }

    for( int i=0; i<n; i++ )
    {
        p = i+k;
        if( p >= n )
        {
            p = p-n;
        }

        arr2[p] = arr[i];
    }

    for( int i=0; i<q; i++ )
    {
        cout << arr2[ query[i] ] << endl;
    }

    return 0;


}
