class Solution {
public:
    bool isPalindrome(int x) {

        if( x < 0 ) {
            return false;
        }

        int b = x;
        int l = 0;

        while( b ) {
           b /=10;
           l++;
        }

        string s;
        for( int i=0; i<l; i++ ) {
            s += x%10 + 48;
            x /= 10;
        }

        int p = 1;
        for( int i=0; i<l/2; i++ ) {
            if( s[i] != s[l-1-i] )
            {
                p = 0;
            }
        }

        if( p ) {
            return true;
        }

        return false;

    }
};
