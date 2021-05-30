#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, d;
    cin >> n >> d;

    int arr[n];
    int triplets = 0;
    map<int, int> m;

    for( int i=0; i<n; i++ )
    {
        cin >> arr[i];
        m[ arr[i] ] = 1;
    }

    for( int i=0; i<n-2; i++ )
    {
        if( m[ arr[i] + d ] && m[ arr[i] + d + d ] )
        {
            triplets++;
        }
    }

    cout << triplets << endl;
    return 0;

}
