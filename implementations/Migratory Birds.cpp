#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, birdId, m = 0;
    cin >> n;

    int arr[6] = {0,0,0,0,0,0};

    for( int i=0; i<n; i++ )
    {
        cin >> birdId;
        arr[birdId]++;

        if( m < arr[birdId] ) {
            m = arr[birdId];
        }
    }

    for( int i=1; i<=5; i++ )
    {
        if( arr[i] == m ) {
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}
