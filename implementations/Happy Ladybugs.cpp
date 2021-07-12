#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
     cin >> tc;
     while(tc--)
     {
         int l;
         cin >> l;
         string s;
         cin >> s;

         map <char, int> m;

         int isHappy = 1;
         int yes = 1;

         for( int i=0; i<l; i++ )
         {
             m[ s[i] ]++;

             if( s[i] >= 'A' && s[i] <= 'Z' )
             {
                 if( i==0 ) // checking for the first character
                 {
                     if( ( i+1 < l && s[i] != s[i+1] ) || i+1 >= l )
                     {
                         isHappy = 0;
                     }
                 } else if( i+1 == l ) // checking for the last character
                 {
                     if( ( i-1 >= 0 && s[i] != s[i-1] ) || i-1 < 0 )
                     {
                         isHappy = 0;
                     }
                 } else if( s[i] != s[i+1] && s[i] != s[i-1] ) // checking for all middle characters
                 {
                     isHappy = 0;
                 }
             }
         }

         if( m['_'] == l ) // if all characters are _
         {
             yes = 1;
         } else if( !isHappy )
         {
             for( char c = 'A'; c <= 'Z'; c++ )
             {
                 if( m[c] == 1 )
                 {
                     yes = 0;
                     break;
                 }
             }

             if( m['_'] == 0 )
             {
                 yes = 0;
             }
         }

         if( yes )
         {
             cout << "YES" << endl;
         } else
         {
             cout << "NO" << endl;
         }

     }

     return 0;
}
