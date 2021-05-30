#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int t, m = 0, maxNum;
    int arr[n];
    int num[100+1];
    int d = 0;

    for( int i=1; i<=100; i++ ) {
        num[i] = 0;
    }

    for( int i=0; i<n; i++ ) {
        cin >> t;
        num[t]++;

        if( num[t] > m ) {
            m = num[t];
            maxNum = t;
        }
    }


    for( int i=1; i<=100; i++ ) {
        if( i != maxNum ) {
            d += num[i];
        }
    }

    cout << d << endl;
    return 0;

}
