#include <bits/stdc++.h>
using namespace std;

void reverseString(string &s, int index)
{
    int n = s.length();

    if( index == n/2 )
    {
        return;
    }

    char a = s[index];
    s[index] = s[n - index - 1];
    s[n-index-1] = a;
    reverseString(s, index+1);
}

int main()
{
    string s;
    cin >> s;

    reverseString(s, 0);
    cout << s << endl;

    return 0;
}
