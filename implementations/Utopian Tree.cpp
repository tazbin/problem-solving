#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        int length=1;
        cin >> n;
        for( int i=1; i<=n; i++ ) {
            if( i%2 == 0 ) {
                length += 1;
            } else {
                length *= 2;
            }
        }
        cout << length << endl;
    }
    return 0;
}
