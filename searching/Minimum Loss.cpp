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
    int n;
    cin >> n;

    long long int a[n];
    map<long long int, int> b;
    long long int num;

    for( int i=0; i<n; i++ )
    {
        cin >> a[i];
        b[ a[i] ] = i;
    }

    quickSort(a, 0, n-1);
    long long int mini = 9999999999999999;


    for( int i=1; i<n; i++ )
    {
        if( a[i] - a[i-1] < mini && (b[ a[i-1] ] > b[ a[i] ]) )
        {
            mini = a[i] - a[i-1];
        }
    }

    cout << mini << endl;
}
