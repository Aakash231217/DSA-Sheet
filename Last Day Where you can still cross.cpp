class Solution {
public:
    int ROW;
    int COL;
    vector<vector<int>>directions={{1,0},{0,1},{-1,0},{0,-1}};
    bool DFS(vector<vector<int>>&grid,int i,int j){
        if(i<0 or i>=ROW or j<0 or j>=COL or grid[i][j]==1){
            return false;
        }
        if(i==ROW-1)return true;
        grid[i][j]=1;
        for(auto &dir: directions){
            int newi= i+dir[0];
            int newj= j+dir[1];
            if(DFS(grid,newi,newj)){
                return true;
            }
        }
        return false;
    }
    bool canCross( vector<vector<int>>& cells, int mid){
        vector<vector<int>>grid(ROW,vector<int>(COL));
        for(int i=0;i<=mid;i++){
            int x=cells[i][0]-1;
            int y=cells[i][1]-1;
            grid[x][y]=1;
        }
        for(int j=0;j<COL;j++){
            if(grid[0][j]==0 && DFS(grid,0,j)){
                return true;
            }
        }
        return false;
    }
    int latestDayToCross(int row, int col, vector<vector<int>>& cells) {
        ROW=row;
        COL=col;
        int l=0,r=cells.size()-1;
        int lastDay=0;
        while(l<=r){
            int mid= l+(r-l)/2;
            if(canCross(cells,mid)){
                lastDay=mid+1;
                l=mid+1;
            }
            else r=mid-1;
        }
        return lastDay;
    }
};
