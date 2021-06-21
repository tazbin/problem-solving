#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;

    int k;
    cin >> k;

    int c = 0;
    /*
    while( c < s.length() && c < t.length() )
    {
        if( s[c] != t[c] )
        {
            break;
        }
        c++;
    }
    */
    for( int i=0; i < min(s.length(), t.length()); i++ )
    {
        if( s[i] == t[i] )
        {
            c++;
        }
        else
        {
            break;
        }
    }

    int need = s.length() - c + t.length() - c;

    if( k >= s.length() + t.length() )
    {
        cout << "Yes" << endl;
        return 0;
    }

    if( k - need >= 0 && (k-need) % 2 == 0 )
    {
        cout << "Yes" << endl;
        return 0;
    }

    cout << "No" << endl;
    return 0;
}

