#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int n = 0;

    getline(cin, s);
    for( int i=0; s[i]!='\0'; i++ )
    {
        if( s[i] >= 'A' && s[i] <= 'Z' )
        {
            n++;
        }
    }

    cout << n+1 << endl;
    return 0;
}
