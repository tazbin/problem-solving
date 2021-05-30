#include <bits/stdc++.h>
using namespace std;

void elementSwap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int makePartition(int a[], int s, int e)
{
    int pevot = a[e];
    int pIndex = s;

    for( int i=s; i<e; i++ )
    {
        if( a[i] <= pevot )
        {
            elementSwap(&a[i], &a[pIndex]);
            pIndex++;
        }
    }

    elementSwap(&a[e], &a[pIndex]);
    return pIndex;
}

void quickSort(int a[], int s, int e)
{
    if( s >= e )
    {
        return;
    }
    int p = makePartition(a, s, e);
    quickSort(a, s, p-1);
    quickSort(a, p+1, e);
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
    Quick sort

    best case: nLogn
    average case: nLogn
    worst caseL n^2

    Why Quick Sort is preferred over MergeSort for sorting Arrays
    Quick Sort in its general form is an in-place sort (i.e. it doesn’t require any extra storage) whereas merge sort requires O(N) extra storage, N denoting the array size which may be quite expensive. Allocating and de-allocating the extra space used for merge sort increases the running time of the algorithm. Comparing average complexity we find that both type of sorts have O(NlogN) average complexity but the constants differ. For arrays, merge sort loses due to the use of extra O(N) storage space.
    Most practical implementations of Quick Sort use randomized version. The randomized version has expected time complexity of O(nLogn). The worst case is possible in randomized version also, but worst case doesn’t occur for a particular pattern (like sorted array) and randomized Quick Sort works well in practice.
    Quick Sort is also a cache friendly sorting algorithm as it has good locality of reference when used for arrays.
    Quick Sort is also tail recursive, therefore tail call optimizations is done.
    **/
    int n = 6;
    int a[n] = {6,5,4,3,2,1};

    quickSort(a, 0, n-1);
    printArr(a, n);

    return 0;
}
