#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while(tc--)
    {
        int n, c, m;
        cin >> n >> c >> m;

        int number = 0;

        number = n / c;
        n = number;

        while(1)
        {
            if( n < m )
            {
                break;
            }

            number += n / m;
            n = (n/m) + ( n - (n/m)*m );

        }

        cout << number << endl;
    }
    return 0;
}
