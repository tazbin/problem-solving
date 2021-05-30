#include <bits/stdc++.h>
using namespace std;

void quickSort(long long int a[], int l, int h)
{
    if( l >= h )
    {
        return;
    }

    long long int pevot = a[h];
    int m = l;
    for( int i=l; i<h; i++ )
    {
        if( a[i] <= pevot )
        {
            long long int temp = a[m];
            a[m] = a[i];
            a[i] = temp;

            m++;
        }
    }
    long long int temp = a[m];
    a[m] = a[h];
    a[h] = temp;

    quickSort(a, l, m-1);
    quickSort(a, m+1, h);
}

int main()
{
    long long int n, k;
    cin >> n >> k;

    long long int a[n];
    map<long long int, int> b;
    int p = 0;

    for( long long int i=0; i<n; i++ )
    {
        cin >> a[i];
        b[ a[i] ] = 1;
    }

    quickSort(a, 0, n-1);
    for( long long int i=0;i<n; i++ )
    {
        if( b[ a[i]+k ] )
        {
            p++;
        }
    }

    cout << p << endl;
    return 0;

}
