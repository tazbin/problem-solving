#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 9;
    int a[n] = {5,2,1,4,7,8,9,6,3};
    int f = 7;
    int result = 99999999;

    for( int i=0; i<n; i++ )
    {
        if( a[i] > f && a[i] < result )
        {
            result = a[i];
        }
    }

    cout << result << endl;
    return 0;
}
