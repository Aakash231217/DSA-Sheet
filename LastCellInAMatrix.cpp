class Solution{
    public:
    pair<int,int> endPoints(vector<vector<int>> matrix, int R, int C){
        //code here
        int i=0,j=0;
        int up=0,right=1,down=0,left=0;
        while(true){
            if(matrix[i][j]==0){
                if(right)j++;
                else if(down)i++;
                else if(left)j--;
                else if(up)i--;
            }
            else{
                matrix[i][j]=0;
                if(right){
                    right=0;
                    down=1;
                    i++;
                }
                else if(down){
                    down=0;
                    left=1;
                    j--;
                }
                else if(left){
                    up=1;
                    left=0;
                    i--;
                }
                else if(up){
                    right=1;
                    up=0;
                    j++;
                }
            }
            if(i<0)return{i+1,j};
            if(j<0)return {i,j+1};
            if(i>=R)return {i-1,j};
            if(j>=C)return {i,j-1};
        }
        
    }
};
