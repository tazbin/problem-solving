#include <bits/stdc++.h>
using namespace std;

int binarySearch(int a[], int n, int f)
{
    int l = 0;
    int h = n-1;
    int m = (l+h)/2;

    while( a[m] != f && l<h )
    {
        if( a[m] < f )
        {
            l = m+1;
        } else
        {
            h = m-1;
        }
        m = (l+h)/2;
    }
    if( a[m] == f )
    {
        return m;
    } else
    {
        return -1;
    }
}

int main()
{
    int n = 5;
    int a[n] = {1,2,3,4,5};

    int f = 6;
    int result = binarySearch(a, n, f);

    cout << result << endl;
    return 0;
}
