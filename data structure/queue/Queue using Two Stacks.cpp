#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack <int> a;
    stack <int> b;

    int q, t,x, d;

    cin >> q;

    while(q--)
    {
        cin >> t;

        if( t == 1 ){

            cin >> d;
            a.push(d);

        } else if( t == 2 ){

            if( b.empty() ) {

                while( !a.empty() ){
                    b.push( a.top() );
                    a.pop();
                }
                b.pop();

            } else{
                b.pop();
            }

        } else if ( t == 3 ) {

            if( b.empty() ) {

                while( !a.empty() ){
                    b.push( a.top() );
                    a.pop();
                }
                cout << b.top() << endl;

            } else{
                cout << b.top() << endl;
            }

        }
    }

    return 0;

}
