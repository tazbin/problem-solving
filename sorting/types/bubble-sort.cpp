#include <bits/stdc++.h>
using namespace std;

int main()
{
    /**
    Bubble sort

    Worst and Average Case Time Complexity: O(n*n). Worst case occurs when array is reverse sorted.
    Best Case Time Complexity: O(n). Best case occurs when array is already sorted.
    Auxiliary Space: O(1)
    Boundary Cases: Bubble sort takes minimum time (Order of n) when elements are already sorted.

    Use: Due to its simplicity, bubble sort is often used to introduce the concept of a sorting algorithm.
    In computer graphics it is popular for its capability to detect a very small error (like swap of just two elements) in almost-sorted arrays and
    fix it with just linear complexity (2n). For example, it is used in a polygon filling algorithm, where bounding lines are sorted by their x coordinate
    at a specific scan line (a line parallel to x axis) and with incrementing y their order changes (two elements are swapped) only at intersections of two lines
    **/

    int n=6;
    int a[n] = {6,5,4,3,2,1};
    int temp;

    for(int i=0; i<n; i++)
    {
        for( int j=i+1; j<n; j++ )
        {
            if( a[i] > a[j] )
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for( int i=0; i<n; i++ )
    {
        cout << a[i] << " ";
    }
    return 0;
}
