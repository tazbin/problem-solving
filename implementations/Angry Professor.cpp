#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while(t--)
    {
        int n, k, a = 0, temp;
        cin >> n >> k;

        while(n--)
        {
            cin >> temp;
            if( temp <= 0 ) {
                a++;
            }
        }

        if( k <= a ) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}
