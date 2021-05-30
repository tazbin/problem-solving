#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int num;
    int a[10000+1] = {0};

    for( int i=1; i<=n; i++ )
    {
        cin >> num;
        a[num]++;
    }

    cin >> n;
    int b[10000+1] = {0};

    for( int i=1; i<=n; i++ )
    {
        cin >> num;
        b[num]++;
    }

    for( int i=1; i<=10000; i++ )
    {
        if( a[i] != b[i] )
        {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}
