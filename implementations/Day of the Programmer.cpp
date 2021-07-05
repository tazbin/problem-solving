#include <bits/stdc++.h>
using namespace std;

void makeString(int y, int isLeapYear)
{
    string s = "";
    int n;
    n = y/1000;
    s += n + 48;

    n = y/100;
    n %= 10;
    s += n + 48;

    n = y/10;
    n %= 10;
    s += n + 48;

    y %= 10;
    s += y + 48;

    if( isLeapYear )
    {
        s = "12.09." + s;
    } else
    {
        s = "13.09." + s;
    }

    cout << s << endl;
    return;
}

int main()
{
    int y;
    cin >> y;

    if( y == 1918 )
    {
        cout << "26.09.1918" << endl;
        return 0;
    }

    if( y < 1918 && y%4 == 0 )
    {
        makeString(y, 1);
        return 0;
    } else if( y < 1918 && y%4 != 0 )
    {
        makeString(y, 0);
        return 0;
    }

    if( y > 1918 && ( y%400 == 0 || (y%4 == 0 && y%100 != 0) ) )
    {
        makeString(y, 1);
        return 0;
    } else
    {
        makeString(y, 0);
        return 0;
    }

    return 0;
}
