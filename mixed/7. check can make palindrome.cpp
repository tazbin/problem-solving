#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    map<char, int> m;

    for( int i=0; i<s.length(); i++ )
    {
        m[ s[i] ]++;
    }

    int hasOdd = 0;
    for( int i=0; i<m.size(); i++ )
    {
        if( m[i]%2 != 0 )
        {
            hasOdd++;
        }
    }

    if( hasOdd > 1 )
    {
        cout << "NO" << endl;
    } else
    {
        cout << "YES" << endl;
    }

    return 0;
}
