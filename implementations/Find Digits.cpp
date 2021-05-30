#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {

        int n, temp, c = 0;
        cin >> n;
        temp = n;

        while(temp)
        {
            if( ( temp%10 != 0 ) && ( n % (temp%10) == 0 ) ) {
                c++;
            }
            temp /= 10;
        }

        cout << c << endl;

    }
}
