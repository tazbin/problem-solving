#include <bits/stdc++.h>
using namespace std;

void checkPalindrome(string s, int i)
{
    int n = s.length();

    if( i < n )
    {
        if( s[i] == s[n-i-1] )
        {
            checkPalindrome(s, i+1);
        } else
        {
            cout << "NO" << endl;
            return;
        }
    } else
    {
        cout << "YES" << endl;
        return;
    }
}

int main()
{
    string s;
    cin >> s;

    checkPalindrome(s, 0);
    return 0;
}
