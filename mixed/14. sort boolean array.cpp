#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    int numZeros = 0;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        if( !a[i] )
        {
            numZeros++;
        }
    }

    for( int i=0; i<n; i++ )
    {
        if( i+1 <= numZeros )
        {
            a[i] = 0;
        } else
        {
            a[i] = 1;
        }
    }

    for( int i=0; i<n; i++ )
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
