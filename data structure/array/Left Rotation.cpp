#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, d;

    cin >> n >> d;

    int arr[n];
    int rotArr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    // let's rotate the array each element to the left by d
    int newPos;
    for(int i=0; i<n; i++){

        newPos = i - d;
        if( newPos < 0 ){
            newPos = n + newPos;
        }

        rotArr[newPos] = arr[i];

    }

    // print the new array
    for(int i=0; i<n; i++){
        cout << rotArr[i] << " ";
    }
    cout << endl;

    return 0;
}
