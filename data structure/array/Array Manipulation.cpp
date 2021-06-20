#include <bits/stdc++.h>
using namespace std;

long long int arr[10000000] = {0};

int main()
{
    long long int n;
    cin >> n;

    for( int i=0; i<n; i++ )
    {
        arr[i] = 0;
    }

    long long int m;
    cin >> m;
    long long int a, b, k;

    while(m--)
    {
        cin >> a >> b >> k;

        arr[a-1] += k;
        if( b-1 < n-1 ) {
            arr[b] -= k;
        }
    }

    m = arr[0];
    for( long long int i=1; i<n; i++ )
    {
        arr[i] += arr[i-1];
        if( arr[i] > m )
        {
            m = arr[i];
        }
    }

    cout << m << endl;
    return 0;
}
