#include <bits/stdc++.h>
using namespace std;

long long int getSum(long long int s)
{
    long long int p = s;
    long long int d = 0;
    while( p )
    {
        p /= 10;
        d++;
    }

    long long int l, r;
    l = d/2;
    if( 2*l < d )
    {
        r = l+1;
    } else
    {
        r = l;
    }

    long long int a = pow(10, r);
    return s/a + s%a;

}

int main()
{
    long long int p, q;
    int f = 0;

    cin >> p >> q;

    for( long long int i=p; i<=q; i++ )
    {
        long long int s = i*i;
        if( i == getSum(s) )
        {
            cout << i << " ";
            f++;
        }
    }

    if( f > 0 )
    {
        cout << endl;
    } else
    {
        cout << "INVALID RANGE" << endl;
    }

    return 0;
}
