#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l;
    cin >> l;

    char pass[l];
    scanf("%s", &pass);

    int missing = 0;
    int m[4] = {1,1,1,1};

    for( int i=0; i<l; i++ )
    {
        if( pass[i] >= '0' && pass[i] <= '9' )
        {
            m[0] = 0;
        } else if( pass[i] >= 'a' && pass[i] <= 'z' )
        {
            m[1] = 0;
        } else if( pass[i] >= 'A' && pass[i] <= 'Z' )
        {
            m[2] = 0;
        } else if( pass[i] == '!' || pass[i] == '@' || pass[i] == '#' || pass[i] == '$' || pass[i] == '%' || pass[i] == '^' || pass[i] == '&' || pass[i] == '*' || pass[i] == '(' || pass[i] == ')' || pass[i] == '-' || pass[i] == '+' )
        {
            m[3] = 0;
        }
    }

    missing = m[0] + m[1] + m[2] + m[3];

    cout << max( (6-l), missing ) << endl;
    return 0;
}
