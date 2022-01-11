class Solution {
public:
    int maxArea(vector<int>& height) {

        int maxArea = 0;
        int l = height.size();

        int left = 0;
        int right = l-1;

        while( left < right ) {
            maxArea = max( maxArea, (right - left) * min( height[left], height[right] ) );
            if( height[right] <= height[left] ) {
                right--;
            } else {
                left++;
            }
        }

        return maxArea;

    }
};
