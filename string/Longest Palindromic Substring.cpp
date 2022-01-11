class Solution {
public:
    string longestPalindrome(string s) {

        int l = s.length();
        string t = "";
        int m = 1;
        int c = 0;
        int j, k, n;

        for( int i=0; i<l; i++ ) {
            j = 1;

            if( isValidChar(i-j, l) && isValidChar(i+j, l) && s[i-j] == s[i+j] ) // first case
            {
                while( isValidChar(i-j, l) && isValidChar(i+j, l) && s[i-j] == s[i+j] )
                {
                    j++;
                    //cout << j << " : " << s[i-j] << " " << s[i+j] << endl;
                }
                j--;
                if( m < (2 * j) + 1 )
                {
                    m = (2 *j) + 1;
                    t = makeString(s, i-j, i+j);
                }
            }

            j = 1;

            if( isValidChar(i+j, l) && s[i] == s[i+j] ) // second case
            {
                while( isValidChar(i-j, l) && isValidChar(i+j+1, l) && s[i-j] == s[i+j+1] )
                {
                    j++;
                    //cout << j << " : " << s[i-j] << " " << s[i+j] << endl;
                }
                j--;
                if( m < (2 * j) + 2 )
                {
                    m = (2 *j) + 2;
                    t = makeString(s, i-j, i+j+1);
                }
            }

            j = 1;

            if( isValidChar(i-j, l) && s[i-j] == s[i] ) // third case
            {
                while( isValidChar(i-j-1, l) && isValidChar(i+j, l) && s[i-j-1] == s[i+j] )
                {
                    j++;
                    //cout << j << " : " << s[i-j] << " " << s[i+j] << endl;
                }
                j--;
                if( m < (2 * j) + 2 )
                {
                    m = (2 *j) + 2;
                    t = makeString(s, i-j-1, i+j);
                }
            }
        }

        if( m == 1 ) {
            char character = s[0];

            string tmp_string;
            tmp_string.push_back(character);

            return tmp_string;
        } else {
            return t;
        }

    }


    string makeString(string s, int a, int b)
    {
        string t = "";
        for( int i=a; i<=b; i++ )
        {
            t += s[i];
        }

        return t;
    }

    int isValidChar(int c, int l)
    {
        if( c >= 0 && c < l )
        {
            return 1;
        }

        return 0;
    }


};
