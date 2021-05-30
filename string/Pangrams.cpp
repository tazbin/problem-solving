#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<char, int> m;
    int n = 0;
    char c = 'a';
    for( int i=1; i<=26; i++ )
    {
        m[c] = 1;
        c++;
    }

    string s;
    getline(cin, s);

    for( int i=0; s[i] != '\0'; i++ )
    {
        if( s[i] != ' ' )
        {
            if( s[i] <= 90 )
            {
                s[i] = s[i] + 32;
            }
            if( m[ s[i] ] == 1 )
            {
                n++;
                m[ s[i] ]++;
            }
        }
    }
    if( n == 26 )
    {
        cout << "pangram" << endl;
    } else
    {
        cout << "not pangram" << endl;
    }
    return 0;
}
