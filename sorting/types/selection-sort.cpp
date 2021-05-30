#include <bits/stdc++.h>
using namespace std;

int main()
{

    /**
    Selection sort

    Time Complexity: O(n2) as there are two nested loops.
    Auxiliary Space: O(1)
    The good thing about selection sort is it never makes more than O(n) swaps and can be useful when memory write is a costly operation.
    **/

    int n=6;
    int a[n] = {6,2,4,3,5,1};
    int sIndex;
    int temp;

    for( int i=0; i<n; i++ )
    {
        sIndex = i;
        for( int j=i; j<n; j++ )
        {
            if( a[sIndex] > a[j] )
            {
                sIndex = j;
            }
        }

        temp = a[i];
        a[i] = a[sIndex];
        a[sIndex] = temp;
    }

    for( int i=0; i<n; i++ )
    {
        cout << a[i] << " ";
    }
    return 0;
}
