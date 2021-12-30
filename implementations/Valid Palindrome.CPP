class Solution {
public:
    bool isPalindrome(string s) {

        string r;
        int l = s.length();

        for(int i=0; i<l; i++)
        {
            if( (s[i] >= '0' && s[i] <= '9') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') )
            {
                if( s[i] >= 'A' && s[i] <= 'Z' )
                {
                    s[i] = s[i] + 32;
                }

                r += s[i];
            }
        }

        l = r.length();

        for( int i=0; i<l/2; i++ )
        {
            if( r[i] != r[l-1-i] )
            {
                return false;
            }
        }

        return true;

    }
};
