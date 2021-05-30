#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while(tc--)
    {
        char s1[100001];
        char s2[100001];

        scanf("%s %s", &s1, &s2);

        int l1 = strlen(s1);
        int l2 = strlen(s2);

        int arr[26] = {0};

        for( int i=0; i<l1; i++ )
        {
            if( !arr[ s1[i] - 'a' ] )
            {
                arr[ s1[i] - 'a' ] = 1;
            }
        }

        string result = "NO";

        for( int i=0; i<l2; i++ )
        {
            if( arr[ s2[i] - 'a' ] )
            {
                result = "YES";
                break;
            }
        }

        cout << result << endl;
    }
    return 0;
}
