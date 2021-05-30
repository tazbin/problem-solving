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

        int i=0;
        int d=0;

        for( int j=1; s[j] != '\0'; j++ )
        {
            if( s[i] == s[j] )
            {
                d++;
            } else
            {
                i = j;
            }
        }
        cout << d << endl;
    }
    return 0;
}
