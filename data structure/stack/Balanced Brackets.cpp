#include <bits/stdc++.h>

using namespace std;

// Complete the isBalanced function below.
string isBalanced(string s) {

    stack <char> b;
    char top;

    for( int i=0; i < s.length(); i++){

        if( s[i] == '(' || s[i] == '{' || s[i] == '[' ){

            b.push(s[i]);

        } else {

            if(!b.empty()){
                top = b.top();
                if( top == '(' && s[i] == ')' ){
                    b.pop();
                } else if( top == '{' && s[i] == '}' ){
                    b.pop();
                } else if( top == '[' && s[i] == ']' ){
                    b.pop();
                } else {
                    b.push(s[i]);
                }
            } else {
                b.push(s[i]);
            }

        }
    }

    if(b.empty()){
        return "YES";
    } else{
        return "NO";
    }

}

int main()
{
    int t;
    string s;
    cin >> t;

    for (int t_itr = 0; t_itr < t; t_itr++) {
        cin >> s;

        cout << isBalanced(s) << "\n";
    }

    return 0;
}
