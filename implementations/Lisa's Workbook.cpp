#include <bits/stdc++.h>
using namespace std;

int main()
{
    int chapters;
    float perPage;
    cin >> chapters >> perPage;

    float c[chapters];

    for(int i=0; i<chapters; i++)
    {
        cin >> c[i];
    }

    int lastProb = 0;
    int newProb = 0;
    int cp = 0;
    int sp = 0;

    int page;

    for( int i=0; i<chapters; i++ )
    {
        page = ceil( c[i] / perPage );
        newProb = 0;

        while( page-- )
        {
            cp++;
            lastProb = newProb + 1;
            newProb = lastProb + perPage - 1;
            newProb = newProb > c[i] ? c[i] : newProb;

            if( cp >= lastProb && cp <= newProb )
            {
                sp++;
            }

        }
    }

    cout << sp << endl;
    return 0;

}
