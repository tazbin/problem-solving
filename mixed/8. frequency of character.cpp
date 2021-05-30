#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    char c;
    cin >> c;

    int f=0;

    for(int i=0; i<s.length(); i++)
    {
        if( s[i] == c )
        {
            f++;
        }
    }

    cout << f << endl;
    return 0;
}
