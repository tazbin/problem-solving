#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while( tc-- )
    {
        long long int n, m, s;
        cin >> n >> m >> s;

        long long int r = (m%n) + s - 1;
        if( r == 0 )
        {
            r = n;
        }
        if( r > n )
        {
            r -= n;
        }

        cout << r << endl;
    }
    return 0;
}
