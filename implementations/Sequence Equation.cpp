#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin >> n;

    int arr[n+1];

    for( int i=1; i<=n; i++ )
    {
        cin >> arr[i];
    }

    for( int i=1; i<=n; i++ ) {

        for( int j=1; j<=n; j++ ) {
            if( arr[j] == i ) {
                t = j;
                break;
            }
        }

        for( int j=1; j<=n; j++ ) {
            if( arr[j] == t ) {
                t = j;
                break;
            }
        }

        cout << t << endl;

    }
    return 0;
}
