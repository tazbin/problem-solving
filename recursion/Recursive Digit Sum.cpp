#include <bits/stdc++.h>
using namespace std;

long long int super_digit(long long int d)
{
    long long int a = 0;
    if( d/10 == 0 )
    {
        return d;
    } else
    {
        while( d )
        {
            a += d%10;
            d /= 10;
        }
        return super_digit(a);
    }
}

int main()
{
    string s;
    cin >> s;
    int l = s.length();


    int k;
    cin >> k;

    long long int d = 0;

    for(int i=0; i<l; i++)
    {
        d += s[i] - 48;
    }
    d *= k;

    d = super_digit(d);

    cout << d << endl;
    return 0;
}
