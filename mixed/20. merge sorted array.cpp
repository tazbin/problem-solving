#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;

    int A[a];
    for( int i=0; i<a; i++ )
    {
        cin >> A[i];
    }

    int b;
    cin >> b;

    int B[b];
    for( int i=0; i<b; i++ )
    {
        cin >> B[i];
    }

    int m[a+b];

    int i=0, j=0, k=0;
    while( i<a && j<b )
    {
        if( A[i] <= B[j] )
        {
            m[k] = A[i];
            i++;
        } else
        {
            m[k] = B[j];
            j++;
        }
        k++;
    }

    while( i<a )
    {
        m[k] = A[i];
        i++;
        k++;
    }

    while( j<b )
    {
        m[k] = B[j];
        j++;
        k++;
    }

    for( int i=0; i<(a+b); i++ )
    {
        cout << m[i] << " ";
    }
    cout << endl;

    return 0;
}
