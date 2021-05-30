#include <bits/stdc++.h>
using namespace std;

void equalStacks(vector<int> h1, vector<int> h2, vector<int> h3) {
    int maxheight = 0;
    stack <int> s1;
    stack <int> s2;
    stack <int> s3;

    for(int i=h1.size()-1; i>=0; i--){
        if(!s1.empty()){
            s1.push(s1.top() + h1[i]);
        } else{
            s1.push(h1[i]);
        }
        cout << s1.top() << " ";
    }
    cout << endl;

    for(int i=h2.size()-1; i>=0; i--){
        if(!s2.empty()){
            s2.push(s2.top() + h2[i]);
        } else{
            s2.push(h2[i]);
        }
        cout << s2.top() << " ";
    }
    cout << endl;

    for(int i=h3.size()-1; i>=0; i--){
        if(!s3.empty()){
            s3.push(s3.top() + h3[i]);
        } else{
            s3.push(h3[i]);
        }
        cout << s3.top() << " ";
    }
    cout << endl;

    while ( !s1.empty() && !s2.empty() && !s3.empty() ) {
            cout << "tops are: " << s1.top() << " " << s2.top() << " " << s3.top() << endl;

        if( s1.top() == s2.top() && s2.top() == s3.top() ){
            maxheight = s1.top();
            cout << "got the max one " << s1.top() << endl;
            break;
        }

        if( s1.top() >= s2.top() && s1.top() >= s3.top() ){
            cout << s1.top() << endl;
            s1.pop();
        } else if( s2.top() >= s1.top() && s2.top() >= s3.top() ){
            cout << s2.top() << endl;
            s2.pop();
        } else if( s3.top() >= s1.top() && s3.top() >= s2.top() ){
            cout << s3.top() << endl;
            s3.pop();
        }

    }
    cout << maxheight << endl;
}

int main()
{
    vector <int> h1 = {3, 2, 1, 1, 1};
    vector <int> h2 = {4, 3, 2};
    vector <int> h3 = {1, 1, 4, 1};

    equalStacks(h1, h2, h3);

}
