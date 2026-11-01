class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int ans=0;
        // int leftMax=0;
        // int rightMax=0;
        while(left < right){
            int h;
            if(height[left] < height[right]){
                h=height[left];
            }
            else{
                h=height[right];
            }
            int area = h* (right - left);
            if(area > ans){
                ans =area;
            }
            if(height[left] < height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return ans;
    }
};