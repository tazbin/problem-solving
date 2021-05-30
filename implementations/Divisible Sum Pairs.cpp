#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int arr[n];
    int m[k];
    int num, c = 0, need;

    for( int i=0; i<k; i++ )
    {
        m[i] = 0;
    }

    for( int i=0; i<n; i++ )
    {
        cin >> num;
        if( num < k ) {
            arr[i] = num;
        } else {
            arr[i] = num%k;
        }

        m[ arr[i] ]++;
    }


    for( int i=0; i<n; i++ )
    {
        m[ arr[i] ]--;

        if( arr[i] == 0 ){
            need = 0;
        } else {
            need = k - arr[i];
        }

        if( m[need] > 0 ) {
            c += m[need];
        }
    }

    cout << c << endl;

    return 0;

}
