#include <bits/stdc++.h>
using namespace std;

void mergeArr(int a[], int l, int m, int r)
{
    int n1 = m-l+1;
    int n2 = r-m;

    int L[n1], R[n2];

    for(int i=0; i<n1; i++)
    {
        L[i] = a[l+i];
    }

    for( int i=0; i<n2; i++ )
    {
        R[i] = a[m+1+i];
    }

    int i=0, j=0;
    int k=l;
    while( i < n1 && j < n2 )
    {
        if( L[i] <= R[j] )
        {
            a[k] = L[i];
            i++;
        } else
        {
            a[k] = R[j];
            j++;
        }
        k++;
    }

    while( i < n1 )
    {
        a[k] = L[i];
        i++;
        k++;
    }

    while( j < n2 )
    {
        a[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int a[], int l, int r)
{
    if( l >= r )
    {
        return;
    }

    int m = (r-l)/2 + l;

    mergeSort(a, l, m);
    mergeSort(a, m+1, r);

    mergeArr(a, l, m, r);
}

void printArr(int a[], int n)
{
    for( int i=0; i<n; i++ )
    {
        cout << a[i] << " ";
    }
    cout << endl;
}


int main()
{
    /**
    Merge sort

    Time Complexity: θ(nLogn). Merge Sort is a recursive algorithm and time complexity can be expressed as following recurrence relation.
    Auxiliary Space: O(n)
    Algorithmic Paradigm: Divide and Conquer
    Sorting In Place: No in a typical implementation
    Stable: Yes

    Drawbacks of Merge Sort

    Slower comparative to the other sort algorithms for smaller tasks.
    Merge sort algorithm requires an additional memory space of 0(n) for the temporary array.
    It goes through the whole process even if the array is sorted.
    **/
    int n = 7;
    int a[n] = {6,7,5,4,3,2,1};

    mergeSort(a, 0, n-1);
    printArr(a, n);

    return 0;
}
