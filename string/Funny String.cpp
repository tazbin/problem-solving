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
        int funny = 1;

        int l = strlen(s);
        int arr[l-1];

        for( int i=0; i<l-1; i++ )
        {
            arr[i] = abs(s[i] - s[i+1]);
        }

        for( int i=l-1; i>=1; i-- )
        {
            if( arr[l-i-1] != abs( s[i] - s[i-1] ) )
            {
                funny = 0;
            }
        }

        if( funny )
        {
            cout << "Funny" << endl;
        } else
        {
            cout << "Not Funny" << endl;
        }
    }
    return 0;
}
