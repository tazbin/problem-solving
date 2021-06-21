#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    long long int n;
    cin >> n;

    long long c = 0;
    for( int i=0; i<s.length(); i++ )
    {
        if( s[i] == 'a' )
        {
            c++;
        }
    }

    c = (n/s.length()) * c;

    for( int i=0; i<(n%s.length()); i++ )
    {
        if( s[i] == 'a' )
        {
            c++;
        }
    }

    cout << c << endl;
    return 0;
}
