#include <bits/stdc++.h>
using namespace std;

int main()
{
    char c1, c2 = 'a';

    int l;
    cin >> l;

    string s;
    cin >> s;
    int maxR = 0;
    int r = 0;

    string test;

    if( s.size() == 1 )
    {
        cout << 0 << endl;
        return 0;
    }

    for( int i=0; i<26; i++ )
    {
        for( int j=i+1; j<26; j++ )
        {
            c1 = 'a' + i;
            c2 = 'a' + j;

            test = "";
            r = 0;

            for( int k=0; k<l; k++ )
            {
                if( s[k] == c1 || s[k] == c2 )
                {
                    if( !test.size() )
                    {
                        test += s[k];
                        r++;
                    } else
                    {
                        if( (s[k] == c1 && test[ test.size() -1 ] == c2) || (s[k] == c2 && test[ test.size() -1 ] == c1) )
                        {
                            test += s[k];
                            r++;
                        } else
                        {
                            break;
                        }
                    }
                }
                if( k == l-1 )
                {
                    maxR = r > maxR ? r : maxR;
                }
            }

        }
    }

    cout << maxR << endl;
    return 0;
}
