#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while(tc--)
    {
        char s[100000];
        scanf("%s", &s);

        int l = strlen(s);
        int a[26];

        for( int i=0; i<26; i++ )
        {
            a[i] = 0;
        }

        for( int i=0; i<l; i++ )
        {
            if( a[ s[i] - 97 ] == 0 )
            {
                a[ s[i] - 97 ] = 1;
            }
        }

        int r = 0;
        for( int i=0; i<26; i++ )
        {
            r += a[i];
        }

        cout << r << endl;
    }
    return 0;
}
