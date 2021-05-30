#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int c = 0;
    int a[26] = {0};

    for( int j=0; j<n; j++ )
    {
        char s[100];
        scanf("%s", &s);
        int l = strlen(s);

        for( int i=0; i<l; i++ )
        {
           if( a[ s[i] - 'a' ] == j )
           {
               a[ s[i] - 'a' ]++;
               if( a[ s[i] - 'a' ] == n )
               {
                   c++;
               }
           }
        }
    }
    cout << c << endl;
    return 0;
}
