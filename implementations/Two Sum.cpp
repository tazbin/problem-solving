class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int l = nums.size();
        map <int, int> m;
        vector<int> r;

        for( int i=0; i<l; i++ ) {
            m[ nums[i] ] = i+1;
        }

        for( int i=0; i<l; i++ ) {
            if( m[ target - nums[i] ] && m[ target - nums[i] ] != i+1  ) {
                r.push_back(i);
                r.push_back(m[ target - nums[i] ] - 1);
                break;
            }
        }

        return r;
    }
};
