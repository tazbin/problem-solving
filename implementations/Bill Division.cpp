#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int itemPrice;
    int bill = 0;

    for( int i=0; i<n; i++ )
    {
        cin >> itemPrice;
        if( i != k ) {
            bill += itemPrice;
        }

    }

    int taka;
    cin >> taka;

    bill /=2;

    if( bill == taka ) {
        cout << "Bon Appetit" << endl;
    } else {
        cout << taka - bill << endl;
    }

    return 0;
}
