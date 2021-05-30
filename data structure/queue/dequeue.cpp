#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;

    cin >> tc;

    for(int i=1; i<=tc; i++)
    {
        cout << "Case " << i << ":" << endl;

        int n, m, d;
        string s;

        cin >> n >> m;

        deque <int> dq;

        while(m--)
        {
            cin >> s;

            if( s == "pushLeft" ){

                cin >> d;
                if( dq.size() == n ){
                    cout << "The queue is full" << endl;
                } else {
                    dq.push_front(d);
                    cout << "Pushed in left: " << d << endl;
                }

            } else if( s == "pushRight" ){

                cin >> d;
                if( dq.size() == n ){
                    cout << "The queue is full" << endl;
                } else {
                    dq.push_back(d);
                    cout << "Pushed in right: " << d << endl;
                }

            } else if( s == "popLeft" ) {

                if( dq.empty() ){
                    cout << "The queue is empty" << endl;
                } else {
                    d = dq.front();
                    dq.pop_front();
                    cout << "Popped from left: " << d << endl;
                }

            } else if( s == "popRight" ) {

                if( dq.empty() ){
                    cout << "The queue is empty" << endl;
                } else {
                    d = dq.back();
                    dq.pop_back();
                    cout << "Popped from right: " << d << endl;
                }

            }

        }

    }

    return 0;

}
