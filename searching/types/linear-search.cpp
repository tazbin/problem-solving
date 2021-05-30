#include <bits/stdc++.h>
using namespace std;

int linearSearch(int a[], int n, int f)
{
    for(int i=0; i<n; i++)
    {
        if( a[i] == f )
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n = 5;
    int a[n] = {1,2,3,4,5};

    int f = 5;
    int result = linearSearch(a, n, f);

    cout << result << endl;
    return 0;
}
