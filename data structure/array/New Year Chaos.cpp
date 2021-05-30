#include <bits/stdc++.h>
using namespace std;

void swapElements(int arr[], int a, int b)
{
    int temp;
    temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

int main()
{
    int tc;
    cin >> tc;

    while(tc--)
    {
        int n;
        cin >> n;

        int arr[n];

        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }

        int swapCount = 0;

        for( int i=n-1; i>=0; i-- )
        {
            if( arr[i] != i+1 ){

                if( arr[i-1] == (i+1) ){

                    swapCount++;
                    swapElements(arr, i-1, i);

                } else if( arr[i-2] == (i+1) ){

                    swapCount+=2;
                    swapElements(arr, i-2, i-1);
                    swapElements(arr, i-1, i);

                } else{

                    swapCount = -1;
                    break;

                }

            }
        }

        if( swapCount < 0 ){

            cout << "Too chaotic" << endl;

        } else {

            cout << swapCount << endl;

        }


    }
    return 0;
}
