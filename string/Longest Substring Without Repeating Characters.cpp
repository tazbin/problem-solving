class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int l = s.length();
        int m = 1;
        int p = 0;

        int t = 0;

        if( l == 0 )
        {
            return 0;
        }

        for( int i=1; i<l; i++ )
        {
            t = 0;
            for( int j=p; j<i; j++ )
            {
                if( s[i] == s[j] )
                {
                    if( (i-p) > m )
                    {
                        m = i-p;
                    }
                    p = j + 1;
                    t++;
                }
            }

            if( i == l-1 && t == 0 )
            {
                if( m < (l - p) )
                {
                    m = l - p;
                }
            }
        }

        return m;

    }
};
