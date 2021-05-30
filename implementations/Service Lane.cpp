#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;

    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    int m = 100000;
    int s, e;

    while( t-- )
    {
        cin >> s >> e;

        for( int i=s; i<=e; i++ )
        {
            if( arr[i] < m ){
                m = arr[i];
            }
        }
        cout << m << endl;
        m = 100000;
    }
    return 0;
}
