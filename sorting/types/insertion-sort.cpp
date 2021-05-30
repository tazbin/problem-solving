#include <bits/stdc++.h>
using namespace std;

int main()
{
    /**
    Insertion sort

    Time Complexity: O(n^2)
    Auxiliary Space: O(1)
    Boundary Cases: Insertion sort takes maximum time to sort if elements are sorted in reverse order. And it takes minimum time (Order of n) when elements are already sorted.
    Algorithmic Paradigm: Incremental Approach
    Uses: Insertion sort is used when number of elements is small. It can also be useful when input array is almost sorted, only few elements are misplaced in complete big array.
    **/

    int n=6;
    int a[n] = {6,2,4,3,5,1};
    int key, j;

    for( int i=0; i<n; i++ )
    {
        key = a[i];
        j = i-1;

        while( j>=0 && a[j] > key )
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }

    for( int i=0; i<n; i++ )
    {
        cout << a[i] << " ";
    }
    return 0;
}
