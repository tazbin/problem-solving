#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[100];
    scanf("%s", &s);

    int l = strlen(s);

    string r;

    for( int i=0; i<l; i++ )
    {
        if( i+1 < l && s[i] != s[i+1] )
        {
            if( s[i] == r[ r.size()-1 ] )
            {
                r = r.substr(0, r.size()-1);
            } else
            {
                r += s[i];
            }
        } else if( i == l-1 )
        {
            if( s[i] == r[ r.size()-1 ] )
            {
                r = r.substr(0, r.size()-1);
            } else
            {
                r += s[i];
            }
        } else
        {
            i++;
        }
    }

    if( !r.size() )
    {
        r = "Empty String";
    }

    cout << r << endl;
}
