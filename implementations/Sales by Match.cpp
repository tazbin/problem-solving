#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s[100+1];
    for( int i=1; i<=100; i++ )
    {
        s[i] = 0;
    }

    int n;
    cin >> n;
    int color;

    for( int i=0; i<n; i++ )
    {
        cin >> color;
        s[color]++;
    }

    int p = 0;
    for( int i=1; i<=100; i++ )
    {
        p += s[i]/2;
    }

    cout << p << endl;
    return 0;
}
