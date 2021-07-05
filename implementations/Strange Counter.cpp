#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;

    long long int t = 1;
    long long int m = 3;

    while( t + (m-1) < n )
    {
        t += m;
        m *= 2;
    }

    cout << m - (n-t) << endl;
}
