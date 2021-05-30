#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int h[n];
    int i, area, maxArea = -1, top, b = 0;;

    for( i=0; i<n; i++ ) {
        cin >> h[i];
    }

    stack <int> s;

    for( i=0; i<n; i++ ) {

        if( s.empty() ) { // stack is empty

            s.push(i);

        } else { // stack is not empty

            if( h[ s.top() ] <= h[i] ) {
                s.push(i);
            } else{

                // keep popping untill we get a smaller or equal value & stack is not empty
                top = s.top();
                s.pop();

                while( !s.empty() ) {
                    area = h[ top ] * ( i - s.top() - 1 );
                    if( area > maxArea ) {
                        maxArea = area;
                    }

                    if( h[ s.top() ] <= h[i] ) {
                        s.push(i);
                        b = 1;
                        break;
                    }

                    top = s.top();
                    s.pop();
                }

                // is stack is empty & not broken
                if( b == 0 || s.empty() ){
                    area = h[top] * i;
                    if( area > maxArea ) {
                        maxArea = area;
                    }
                    s.push(i);
                }


            }

        }

    }

    while( !s.empty() ) {
        top = s.top();
        s.pop();

        if( !s.empty() ) {
            area = h[ top ] * ( i - s.top() - 1 );
            if( area > maxArea ) {
                maxArea = area;
            }
        } else {
            area = h[ top ] * i;
            if( area > maxArea ) {
                maxArea = area;
            }
        }
    }


    cout << maxArea << endl;
    return 0;

}
