#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, in;
    cin >> n >> in;

    int jump, r = 0;

    for( int i=0; i<n; i++ )
    {
        cin >> jump;
        if( jump > in && (jump - in) > r ){
            r = jump - in;
        }
    }
    cout << r << endl;
    return 0;
}
