#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int n = 0;
    int r = 0;
    getline(cin, s);

    for( int i=0; s[i] != '\0'; i++ )
    {
        if( 3*n+1 == i )
        {
            n++;
            if( s[i] != 'O' )
            {
                r++;
            }
        } else
        {
            if( s[i] != 'S' )
            {
                r++;
            }
        }
    }
    cout << r << endl;
    return 0;
}
