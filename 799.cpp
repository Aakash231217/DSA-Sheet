class Solution {
public:
    double dp[101][101];
    double solve(int poured, int i, int j){
        if(i<0 or j<0 or i<j) return 0.00;
        if(i==0 && j==0)return poured;
        if(dp[i][j]>-1)return dp[i][j];
        double left_up= (solve(poured,i-1,j-1)-1)/2.0;
         if(left_up<0)left_up=0.0;
        double right_up= (solve(poured,i-1,j)-1)/2.0;
        if(right_up<0)right_up=0.0;
        return dp[i][j]=left_up+right_up;
    }
    double champagneTower(int poured, int query_row, int query_glass) {
        memset(dp,-1,sizeof(dp));
        return min(1.00,solve(poured,query_row,query_glass));
    }
};
