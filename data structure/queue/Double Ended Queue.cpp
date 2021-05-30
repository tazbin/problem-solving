#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    int n, m;
    string s;
    cin >> tc;

    for(int t=1; t<=tc; t++)
    {
        cout << "Case " << t << ":" << endl;

        cin >> n >> m;
        int q[n];
        int p=-1, d;

        for(int k=1; k<=m; k++)
        {
            cin >> s;

            // push to the left
            if( s == "pushLeft" ){

                cin >> d;
                if( p == n-1 ){
                    cout << "The queue is full" << endl;
                } else{
                    for(int i=p; i>=0; i--){
                        q[i+1] = q[i];
                    }
                    p++;
                    q[0] = d;
                    cout << "Pushed in left: " << d << endl;
                }

            // push to the right
            } else if( s == "pushRight" ){

                cin >> d;
                if( p == n-1 ){
                    cout << "The queue is full" << endl;
                } else{
                    p++;
                    q[p] = d;
                    cout << "Pushed in right: " << d << endl;
                }

            // pop from left
            } else if( s == "popLeft" ){

                if( p == -1 ){
                    cout << "The queue is empty" << endl;
                } else{
                    d = q[0];
                    for( int i=0; i<p; i++ ){
                        q[i] = q[i+1];
                    }
                    p--;
                    cout << "Popped from left: " << d << endl;
                }

            // pop from right
            } else if( s == "popRight" ){

                    if( p == -1 ){
                        cout << "The queue is empty" << endl;
                    } else{
                        d = q[p];
                        p--;
                        cout << "Popped from right: " << d << endl;
                    }

            }

            /*
            for(int i=0; i<=p; i++){
                cout << q[i] << " ";
            }
            cout << endl;
            */

            //cout << k << endl;
        }

    }

    return 0;
}
