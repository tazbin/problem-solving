#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long int a[n];

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
            } else
            {
                break;
            }
            k--;
        }
    }

    long long int small = 999999999999999;
    for( int i=0; i<n-1; i++ )
    {
        small = abs(a[i+1] - a[i]) < small ? abs(a[i+1] - a[i]) : small;
    }

    for( int i=0; i<n-1; i++ )
    {
        if( abs( a[i+1] - a[i] ) == small )
        {
            cout << a[i] << " " << a[i+1] << " ";
        }
    }
    cout << endl;
    return 0;

}
