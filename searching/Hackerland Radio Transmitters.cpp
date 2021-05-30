#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int a[100000+1] = {0};
    int num;

    for( int i=0; i<n; i++ )
    {
        cin >> num;
        a[num]++;
    }

    num = 0;
    int j;

    for( int i=1; i<=100000; i++ )
    {
        if( a[i] )
        {
            j = i+k;
            while( j<=100000 && !a[j] && j >= i )
            {
                j--;
            }
            i += j+k;
            num++;
        }
    }

    cout << num << endl;
    return 0;
}
