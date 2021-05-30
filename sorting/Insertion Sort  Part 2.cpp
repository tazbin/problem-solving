#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];

    for( int i=0; i<n; i++ )
    {
        cin >> a[i];
    }

    for( int i=1; i<n; i++ )
    {
        int j=i;
        int t;
        while(j)
        {
            if( a[j-1] > a[j] )
            {
              t = a[j-1];
              a[j-1] = a[j];
              a[j] = t;

              j--;
            } else
            {
                break;
            }
        }
        for( int i=0; i<n; i++ )
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
