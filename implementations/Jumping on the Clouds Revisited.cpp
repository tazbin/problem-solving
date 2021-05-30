#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int arr[n];
    int e = 100;
    int j, index = 0;

    for( int i=0; i<n; i++ ) {
        cin >> arr[i];
    }

    do {
        j = index + k;
        if( j > n - 1 ) {
            j = j - n;
        }

        if( arr[j] == 1 ) {
            e -= 3;
        } else {
            e -= 1;
        }
        index = j;
    } while( j!=0 );

    cout << e << endl;
    return 0;

}
