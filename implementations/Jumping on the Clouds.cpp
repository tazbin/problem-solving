#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for( int i=0; i<n; i++ )
    {
        cin >> arr[i];
    }

    int jumps = 0;

    for( int i=0; i<n; i++ )
    {
        if( i+2 < n && arr[i+2] == 0 ) {
            jumps++;
            i++;
        } else if( i+1 < n && arr[i+1] == 0 ) {
            jumps++;
        }
    }

    cout << jumps << endl;
    return 0;
}
