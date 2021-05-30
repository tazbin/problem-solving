#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l;
    string s;

    cin >> l >> s;

    int cVally = 0;
    int levels = 0;

    for( int i=0; i<l; i++ ) {
        if( s[i] == 'D' ) {
            levels -= 1;
        } else if( s[i] == 'U' ) {
            levels += 1;
            if( levels == 0 ) {
                cVally++;
            }
        }
    }

    cout << cVally << endl;
    return 0;
}
