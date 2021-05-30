#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int A[n], B[m];

    for( int i=0; i<n; i++ )
    {
        cin >> A[i];
    }

    for( int i=0; i<m; i++ )
    {
        cin >> B[i];
    }

    stack <int> a;
    stack <int> b;
    int num;

    for( int i=A[0]; i<=B[0]; i++ )
    {
        a.push(i);
    }

    for( int i=0; i<n; i++ )
    {
        if( !a.empty() ) {
            while( !a.empty() ) {
                if( a.top() % A[i] == 0 ) {
                    b.push( a.top() );
                }
                a.pop();
            }
        } else if( !b.empty() ) {
            while( !b.empty() ) {
                if( b.top() % A[i] == 0 ) {
                    a.push( b.top() );
                }
                b.pop();
            }
        }
    }

    for( int i=0; i<m; i++ )
    {
        if( !a.empty() ) {
            while( !a.empty() ) {
                if( B[i] % a.top() == 0 ) {
                    b.push( a.top() );
                }
                a.pop();
            }
        } else if( !b.empty() ) {
            while( !b.empty() ) {
                if( B[i] % b.top() == 0 ) {
                    a.push( b.top() );
                }
                b.pop();
            }
        }
    }

    /*
    while( !a.empty() )
    {
        cout << a.top() << endl;
        a.pop();
    }
    cout << "---" << endl;
    while( !b.empty() )
    {
        cout << b.top() << endl;
        b.pop();
    }
    */

    if( a.size() > b.size() ) {
        cout << a.size() << endl;
    } else {
        cout << b.size() << endl;
    }
    return 0;
}
