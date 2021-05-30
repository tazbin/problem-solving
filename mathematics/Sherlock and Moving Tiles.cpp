#include <bits/stdc++.h>
using namespace std;

int main()
{
    double l, s1, s2;
    int q;

    cin >> l >> s1 >> s2;
    cin >> q;
    double query, time;

    while(q--)
    {
        cin >> query;

        time = ( sqrt(query) - l ) / ( ( s1 * 0.70710678 ) - ( s2 * 0.70710678 ) );
        if(time < 0.00){
            time *= -1;
        }
        printf("%0.4lf\n", time);
    }

    return 0;
}
