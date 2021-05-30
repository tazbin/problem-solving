#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    int sum = 0;
    for( int i=0; i<n; i++ )
    {
        cin >> arr[i];
        sum += arr[i];
        arr[i] = sum;
    }

    int d, m;
    cin >> d >> m;

    int c = 0;

    for( int i=0; i<n; i++ )
    {
        if( i-m == -1 && arr[i] == d ) {
            c++;
        } else if( arr[i] - arr[i-m] == d ) {
            c++;
        }
    }

    cout << c << endl;
    return 0;
}
