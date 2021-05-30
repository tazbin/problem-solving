#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        char s[100005];
        scanf("%s", &s);

        int l = strlen(s);
        int index = -1;

        for( int i=0; i<l/2; i++ )
        {
            if( s[i] != s[l-i-1] )
            {
                if( s[i] == s[l-i-2] && s[i+1] == s[l-i-3] )
                {
                    index = l-i-1;
                } else
                {
                    index = i;
                }
                break;
            }
        }
        cout << index << endl;
    }
    return 0;
}
