#include <bits/stdc++.h>
using namespace std;

int main()
{
    int g;
    cin >> g;

    while( g-- )
    {
        int n, m, sum, num;
        cin >> n >> m >> sum;

        stack<int> aux;
        stack<int> a;
        stack<int> b;

        for( int i=0; i<n; i++ )
        {
            cin >> num;
            aux.push(num);
        }

        while( !aux.empty() )
        {
            a.push( aux.top() );
            aux.pop();
        }

        for( int i=0; i<m; i++ )
        {
            cin >> num;
            aux.push(num);
        }

        while( !aux.empty() )
        {
            b.push( aux.top() );
            aux.pop();
        }

        num = 0;

        while( !a.empty() && !b.empty() && a.top() <=sum && b.top() <= sum && sum )
        {
            if( a.top() >= b.top() )
            {
                sum -= b.top();
                b.pop();
                num++;
            } else
            {
                sum -= a.top();
                a.pop();
                sum++;
            }
        }

        while( !a.empty() && a.top() <= sum && sum )
        {
            sum -= a.top();
            a.pop();
            num++;
        }

        while( !b.empty() && b.top() <= sum && sum )
        {
            sum -= b.top();
            b.pop();
            num++;
        }

        cout << num << endl;

    }

    return 0;
}
