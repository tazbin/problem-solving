#include <bits/stdc++.h>
using namespace std;

int main()
{
    string h = "hackerrank";
    int tc;
    cin >> tc;

    while(tc--)
    {
        char s[10000];
        scanf("%s", &s);

        int j=0;

        for( int i=0; s[i] != '\0'; i++ )
        {
            if( h[j] == s[i] )
            {
                j++;
            }
        }

        if( j == 10 )
        {
            cout << "YES" << endl;
        } else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
