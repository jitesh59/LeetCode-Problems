class Solution {
public:
    string longestPalindrome(string s) {
        int n= s.size(), start=0,len =1;
        vector<vector<bool>>dp(n,vector<bool>(n,false));
        for(int i=0;i<n;i++)
        dp[i][i]=true;
        for(int l=2;l<=n;l++){
            for(int i=0;i+l-1<n;i++){
                int j= i+l-1;
                if(s[i]==s[j] && (l==2 || dp[i+1][j-1])){
                    dp[i][j]=true;
                    if(l > len){
                        start=i;
                        len=l;
                    }
                }
            }
        }
        return s.substr(start,len);
    }
};