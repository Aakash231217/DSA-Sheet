class Solution {
public:
    int minTaps(int n, vector<int>& ranges) {
        vector<int>dp(n+1,n+2);
        dp[0]=0;
        for(int i=0;i<=n;i++){
            int left=max(i-ranges[i],0);
            int right=min(i+ranges[i],n);
        for(int j=left;j<=right;j++){
            dp[j]=min(dp[j],dp[left]+1);
        }
    }
        return (dp[n]==n+2)?-1:dp[n];
    }
};
