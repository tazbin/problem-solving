#include <bits/stdc++.h>
using namespace std;

int binarySearchByPosition(int A[], int l, int x, bool firstPos)
{
    int low = 0;
    int high = l-1;
    int mid;
    int result = -1;

    while( low <= high )
    {
        mid = (low + high)/2;
        if( A[mid] == x )
        {
            result = mid;
            if( firstPos )
            {
                high = mid - 1;
            } else
            {
                low = mid + 1;
            }
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

int countOcc(int A[], int l, int x)
{
    int firstPlace = binarySearchByPosition(A, l, x, true);
    int lastPlace = binarySearchByPosition(A, l, x, false);

    return lastPlace - firstPlace + 1;
}

int main()
{
    int A[10] = {1, 2, 3, 4, 4, 4, 7, 8, 8, 9};
    int numOcc = countOcc(A, 10, 8);

    cout << "The number comes " << numOcc << " times" << endl;

    return 0;
}
