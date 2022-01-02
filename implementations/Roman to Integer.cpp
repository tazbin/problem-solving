#include <iostream>
#include <map>
using namespace std;

int main()
{
    string s = "MCMXCIV";
    int l = s.length();

    map<char, int> r;
    r['I'] = 1;
    r['V'] = 5;
    r['X'] = 10;
    r['L'] = 50;
    r['C'] = 100;
    r['D'] = 500;
    r['M'] = 1000;

    int sum = 0;

    for( int i=0; i<l; i++ )
    {
        if( i+1 < l && r[s[i]] < r[s[i+1]] )
        {
            sum += ( r[s[i+1]] - r[s[i]] );
            i++;
        } else
        {
            sum += r[s[i]];
        }
    }

    cout << sum << endl;
    return 0;
}
