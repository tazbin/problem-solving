#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // take array size
    int arr[n];

    // take array elements input
    for( int i=0; i<n; i++ )
    {
        cin >> arr[i];
    }

    int temp, c = 0;

    for( int i=0; i<n; i++ )
    {
        while( arr[i] != i+1 ){
            temp = arr[ arr[i] - 1 ];
            arr[ arr[i] - 1 ] = arr[i];
            arr[i] = temp;
            c++;
        }
    }

    // print output
    /*
    for( int i=0; i<n; i++ )
    {
        cout << arr[i] << " ";
    }
    */
    cout << c << endl;

    return 0;
}
