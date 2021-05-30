#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    int numberOfOdds = 0;
    int breads = 0;

    for( int i=0; i<n; i++ )
    {
        cin >> arr[i];
        if( arr[i] % 2 != 0 )
        {
            numberOfOdds++;
        }
    }

    if( numberOfOdds % 2 != 0 )
    {
        cout << "NO" << endl;
        return 0;
    }

    for( int i=0; i<n; i++ )
    {
        if( arr[i] % 2 != 0 )
        {
            arr[i]++;
            arr[i+1]++;
            breads += 2;
        }
    }
    cout << breads << endl;
    return 0;
}
