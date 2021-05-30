#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x1, x2, v1, v2;
    int t;

    cin >> x1 >> v1 >> x2 >> v2;

    if( x2 > x1 && v2 > v1 ) {
        cout << "NO" << endl;
        return 0;
    }

    if( v2 - v1 == 0 ) {
        cout << "NO" << endl;
        return 0;
    }

    t = (x1 - x2) / ( v2 - v1 );

    if( (x1+(v1*t)) == (x2+(v2*t)) ) {
        cout << "YES" << endl;
        return 0;
    }

    cout << "NO" << endl;
    return 0;
}
