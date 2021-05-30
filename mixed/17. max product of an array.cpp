#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    int firstM = -99999999;
    int firstIndex;
    int secondM = -99999999;

    for( int i=0; i<n; i++ )
    {
        cin >> a[i];
        if( a[i] > firstM )
        {
            firstM = a[i];
            firstIndex = i;
        }
    }

    for( int i=0; i<n; i++ )
    {
        if( a[i] > secondM && a[i] <= firstM && i != firstIndex )
        {
            secondM = a[i];
        }
    }

    cout << firstM * secondM << endl;
    return 0;
}
