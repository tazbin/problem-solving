#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b, c;
        int da, db;

        cin >> a >> b >> c;

        da = abs(a - c);
        db = abs(b - c);

        if( da < db ) {
            cout << "Cat A" << endl;
        } else if( da > db ) {
            cout << "Cat B" << endl;
        } else {
            cout << "Mouse C" << endl;
        }
    }
    return 0;
}
