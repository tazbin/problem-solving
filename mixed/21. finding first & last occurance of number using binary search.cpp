#include <bits/stdc++.h>
using namespace std;

int find_first_occ(int A[], int l, int x)
{
    int low = 0;
    int high = l-1;
    int result = -1;
    int mid;

    while( low <= high )
    {
        mid = (low + high) / 2;
        if( A[mid] == x )
        {
            result = mid;
            high = mid - 1;
        } else if( A[mid] > x )
        {
            high = mid - 1;
        } else
        {
            low = mid + 1;
        }
    }

    return result;
}

int find_last_occ(int A[], int l, int x)
{
    int low = 0;
    int high = l-1;
    int result = -1;
    int mid;

    while( low <= high )
    {
        mid = (low + high) / 2;
        if( A[mid] == x )
        {
            result = mid;
            low = mid + 1;
        } else if( A[mid] > x )
        {
            high = mid - 1;
        } else
        {
            low = mid + 1;
        }
    }

    return result;
}

int main()
{
    int A[10] = {1, 2, 3, 4, 4, 4, 7, 8, 8, 9};

    int first_occ = find_first_occ(A, 10, 4);
    cout << "First place is at index: " << first_occ << endl;

    int last_occ = find_last_occ(A, 10, 4);
    cout << "Last place is at index: " << last_occ << endl;

    return 0;
}
