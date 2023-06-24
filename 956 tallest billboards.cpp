class Solution {
public:
    int dp[21][10005];
    int solve(vector<int>&rods, int index, int diff){
        if(index>=rods.size()){
            if(diff==0){
                return 0;
            }
            return INT_MIN;
        }
        if(dp[index][diff+5000]!=-1)return dp[index][diff+5000];

        int nothing = solve(rods,index+1,diff);
        int left= rods[index]+solve(rods,index+1,diff+rods[index]);
        int right=rods[index]+solve(rods,index+1,diff-rods[index]);
        return dp[index][diff+5000]=max({nothing,left,right});
    }
    int tallestBillboard(vector<int>& rods) {
        int n=rods.size();
        memset(dp,-1,sizeof(dp));
        return solve(rods,0,0)/2;
    }
};
