#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack <string> editor;
    string text;
    string s;

    int tc, q, n;

    cin >> tc;

    while(tc)
    {
        cin >> q;

        if( q == 1 ){

            cin >> s;
            if( !editor.empty() ){
                text = editor.top();
                text += s;
                editor.push(text);
            } else {
                editor.push(s);
            }

        } else if( q == 2 ){

            cin >> n;
            s.clear();

            if( !editor.empty() ){
                text = editor.top();

                text.erase(text.end()-n, text.end());
                editor.push(text);
            }

        } else if( q == 3 ) {

            cin >> n;
            if( !editor.empty() ){
                text = editor.top();
                cout << text[n-1] << endl;
            }

        } else if( q == 4 ){

            if( !editor.empty() ){
                editor.pop();
            }
        }

        tc--;
    }

    return 0;

}

