class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        vector<pair<int,int>>zero,one;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid.size();j++){
                if(grid[i][j]==1) one.push_back({i,j});
                else zero.push_back({i,j});
            }
        }
        int ans=-1;
        for(auto it:zero){
            int xi=INT_MAX;
            for(auto it1:one){
                xi=min(xi,abs(it.first-it1.first)+abs(it.second-it1.second));
            }
            if(xi!=INT_MAX){
                ans=max(xi,ans);
            }
        }
        return ans;

    }
};
