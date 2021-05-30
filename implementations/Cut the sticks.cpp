#include <bits/stdc++.h>
using namespace std;

int main()
{
    int go = 1;
    int number = 0;
    int n, small = 1001, secSmall = 1001;
    cin >> n;
    int arr[n];

    for( int i=0; i<n; i++ )
    {
        cin >> arr[i];
        if( arr[i] < small ) {
            small = arr[i];
        }
    }

    while( go )
    {
        go = 0;
        number = 0;
        secSmall = 1001;
        for( int i=0; i<n; i++ )
        {
            if( arr[i] != 0 && arr[i] >= small ) {
                arr[i] -= small;
                number++;
                if( arr[i] > 0 && arr[i] < secSmall ) {
                    secSmall = arr[i];
                    go = 1;
                }
            }
        }
        small = secSmall;
        cout << number << endl;
    }
    return 0;
}
