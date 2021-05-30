#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l;
    cin >> l;

    string s;
    cin >> s;

    int r;
    cin >> r;

    r %= 26;

    for( int i=0; i<l ; i++ )
    {
        if( s[i] >= 'a' && s[i] <= 'z' )
        {
            if( s[i] + r > 'z' )
            {
                s[i] = s[i] + r - 26;
            } else
            {
                s[i] += r;
            }
        } else if( s[i] >= 'A' && s[i] <= 'Z' )
        {
            if( s[i] + r > 'Z' )
            {
                s[i] = s[i] + r - 26;
            } else
            {
                s[i] += r;
            }
        }
    }

    cout << s << endl;
    return 0;
}
