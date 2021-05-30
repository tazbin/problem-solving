#include <bits/stdc++.h>
using namespace std;

int rev(int n)
{
    int t = 0;
    while( n )
    {
        t *= 10;
        t += n%10;
        n /= 10;
    }

    return t;
}

int main()
{
    int a, b, k;
    cin >> a >> b >> k;
    int c = 0;

    for( int i=a; i<=b; i++ )
    {
        if( abs( i - rev(i) ) % k == 0 ) {
            c++;
        }
    }

    cout << c << endl;
    return 0;
}
