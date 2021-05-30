#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h[26], n;
    char s[10];

    int m = 0, length = 0, area;

    for( int i=0; i<26; i++ )
    {
        cin >> h[i];
    }

    cin >> s;

    for( int i=0; s[i] != '\0'; i++ )
    {
        length++;
        n = s[i] - 97;
        if( h[n] > m ) {
            m = h[n];
        }
    }

    area = length * m;
    cout << area << endl;

    return 0;
}
