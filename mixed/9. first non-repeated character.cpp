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

    for( int i=0; i<s.length(); i++ )
    {
        if( m[ s[i] ] == 1 )
        {
            cout << s[i] << endl;
            break;
        }
    }
    return 0;
}
