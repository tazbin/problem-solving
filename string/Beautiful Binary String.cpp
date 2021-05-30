#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l;
    cin >> l;

    int n = 0;

    char s[100];
    scanf("%s", &s);

    for( int i=1; i<l-1; i++ )
    {
        if( s[i-1] == '0' && s[i] == '1' && s[i+1] == '0' )
        {
            s[i+1] = '1';
            n++;
        }
    }
    cout << n << endl;
    return 0;
}
