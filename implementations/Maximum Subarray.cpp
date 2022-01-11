class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int l = nums.size();
        int maxSum = -9999999999;
        int c = 0;

        for( int i=0; i<l; i++ ) {

            c += nums[i];

            if( maxSum < c ) {
                maxSum = c;
            }

            if( c < 0 ) {
                c = 0;
            }

        }

        return maxSum;

    }
};
