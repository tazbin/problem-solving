#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s1[10000], s2[10000];

    scanf("%s %s", &s1, &s2);
    int l1 = strlen(s1);
    int l2 = strlen(s2);

    map<char, int> m1;
    map<char, int> m2;

    for( int i=0; i<l1; i++ )
    {
        m1[ s1[i] ]++;
    }

    for( int i=0; i<l2; i++ )
    {
        m2[ s2[i] ]++;
    }

    int d = 0;

    for( char i='a'; i<='z'; i++ )
    {
        if( m1[i] != m2[i] )
        {
            d += abs( m1[i] - m2[i] );
        }
    }

    cout << d << endl;
    return 0;
}
