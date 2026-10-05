class Solution {
public:
    int longestCommonSubsequence(string a, string b) {
        vector<int> dp(b.size()+1);

        for(int i=1;i<=a.size();i++) {
            int prev=0;
            for(int j=1;j<=b.size();j++) {
                int temp=dp[j];
                if(a[i-1]==b[j-1])
                    dp[j]=prev+1;
                else
                    dp[j]=max(dp[j],dp[j-1]);
                prev=temp;
            }
        }
        return dp[b.size()];
    }
};