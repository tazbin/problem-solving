#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, p;
    cin >> n >> p;

    int totalPage = (n/2)+1;
    int askingPage = (p/2)+1;

    int result;

    if( askingPage <= (totalPage/2) )
    {
        result = askingPage - 1;
    } else
    {
        result = totalPage - askingPage;
    }

    cout << result << endl;
    return 0;
}
