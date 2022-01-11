class Solution {
public:
    vector<string> letterCombinations(string digits) {

        map<char, string> m;
        m['2'] = "abc";
        m['3'] = "def";
        m['4'] = "ghi";
        m['5'] = "jkl";
        m['6'] = "mno";
        m['7'] = "pqrs";
        m['8'] = "tuv";
        m['9'] = "wxyz";

        vector<string> v;
        string t = "";
        int d;

        if( digits.length() == 0 )
        {
            return v;
        }

        makeCom(digits, 0, v, m, t);
        return v;

    }

    void makeCom(string s, int i, vector<string> &v, map<char, string> &m, string t)
    {
        if( i >= s.length() )
        {
            return;
        }

        string p = "";
        for( int j=0; j<m[s[i]].length(); j++ )
        {
            p += t;
            p += m[s[i]][j];

            if( i+1 >= s.length() )
            {
                //cout << p << endl;
                v.push_back(p);
            }
            makeCom(s, i+1, v, m, p);
            p = "";
        }
    }

};
