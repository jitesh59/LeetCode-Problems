class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // // O(n)--
        // int freq=0, ans=0;
        // for(int i=0;i<nums.size();i++){
        //     if(freq==0){
        //         ans=nums[i];
        //     }
        //     if(ans==nums[i]){
        //         freq++;
        //     }
        //     else{
        //         freq--;
        //     }
        // }
        // return ans;

        // O(nlogn)
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int f=1, ans=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i] == nums[i-1]){
                f++;
            }
            else{
                f=1;
                ans=nums[i];
            }
            if(f > n/2){
                return ans;
            }
        }
        return ans;
    }
};