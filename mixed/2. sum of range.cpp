#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s;
    cin >> s;


    int a[s];
    for( int i=0; i<s; i++ )
    {
        if( i==0 )
        {
            cin >> a[i];
        } else
        {
            cin >> a[i];
            a[i] += a[i-1];
        }
    }

    int n;
    cin >> n;
    while(n--)
    {
        int l, r;
        cin >> l >> r;

        if( l==0 )
        {
            cout << a[r] << endl;
        }else
        {
            cout << a[r]-a[l-1] << endl;
        }
    }
    return 0;

}
