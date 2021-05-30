#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int score;
    int h, l;
    int result[2] = {0, 0};

    cin >> score;
    h = l = score;
    for(int i=1; i<n; i++)
    {
        cin >> score;
        if( score > h ) {
            h = score;
            result[0]++;
        } else if( score < l ) {
            l = score;
            result[1]++;
        }
    }

    cout << result[0] << " " << result[1] << endl;
    return 0;

}
