#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while(tc--)
    {
        char s[10000];

        scanf("%s", &s);
        int l = strlen(s);
        int r = 0;

        int a[26];
        for( int i=0; i<26; i++ )
        {
            a[i] = 0;
        }

        for( int i=0; i<l/2; i++ )
        {
            a[ s[i] - 97 ]++;
        }

        for( int i=l/2; i<l; i++ )
        {
            if( a[ s[i] - 97 ] )
            {
                a[ s[i] - 97 ]--;
            }
        }

        for( int i=0; i<26; i++ )
        {
            r += a[i];
        }

        if( l%2 != 0 )
        {
            r = -1;
        }
        cout << r << endl;
    }
    return 0;
}
