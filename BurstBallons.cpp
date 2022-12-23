int maxCoins(int n, vector<int> &a) {
        a.push_back(1);
        a.insert(a.begin(),1);
        vector<vector<int>>dp(n+2,vector<int>(n+2,0));
        int maxi=INT_MIN;
        for(int i=n;i>=1;i--){
            for(int j=1; j<=n;j++){
                if(i>j) continue;
                maxi = INT_MIN;
                for(int idx=i;idx<=j;idx++){
                    int cost=a[i-1]*a[idx]*a[j+1]+dp[idx+1][j]+dp[i][idx-1];
                    maxi=max(cost,maxi);
                }
                dp[i][j]=maxi;
            }
        }
        return dp[1][n];
    }
};
