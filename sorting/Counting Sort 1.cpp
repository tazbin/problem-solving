#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[100] = {0};
    int t;

    for( int i=0; i<n; i++ )
    {
        cin >> t;
        a[t]++;
    }

    for( int i=0; i<100; i++ )
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;

}
