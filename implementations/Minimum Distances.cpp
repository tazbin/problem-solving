#include <bits/stdc++.h>
using namespace std;

int main()
{
    int store[100000+1];
    for( int i=1; i<=100000; i++ )
    {
        store[i] = -1;
    }

    int n;
    cin >> n;

    //int arr[n];
    int num;
    int d = 9999;
    for( int i=0; i<n; i++ )
    {
        cin >> num;
        if( store[num] != -1 )
        {
            store[num] = i - store[num];
            if( store[num] < d )
            {
                d = store[num];
            }
        } else
        {
            store[num] = i;
        }
    }

    d = d == 9999 ? -1 : d;
    cout << d << endl;
    return 0;

}
