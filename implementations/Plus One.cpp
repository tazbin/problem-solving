#include <bits/stdc++.h>
using namespace std;

int main()
{
    int digits[3] = {9, 9, 9};

    int l = 3;
    vector<int> v;

    int r = 1;
    for( int i=l-1; i>=0; i-- )
    {

        if( r == 0 )
        {
            break;
        }

        digits[i] += r;
        r = digits[i]/10;
        if( r )
        {
            digits[i] %= 10;
        }

    }

    if( r )
    {
        v.push_back(r);
    }

    for( int i=0; i<l; i++ )
    {
        v.push_back(digits[i]);
    }

    for( int i=0; i<v.size(); i++ )
    {
        cout << v[i] << " ";
    }

    return 0;
}

