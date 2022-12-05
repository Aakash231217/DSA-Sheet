class Solution {
    static int shotestPath(int[][] mat, int n, int m, int k) {
        int direction[][]={{1,0},{0,1},{0,-1},{-1,0}};
        Queue<int[]> q=new LinkedList<>();
        q.add(new int[]{0,0,k});
        boolean visited[][][]=new boolean[n][m][k+1];
        visited[0][0][k]=true;
        int distance=0;
        while(!q.isEmpty()){
            int sz=q.size();
            while(sz-->0){
                int curr[]=q.remove();
                if(curr[0]==n-1 && curr[1]==m-1) return distance;
                for(int d[]:direction){
                    int i=curr[0]+d[0];
                    int j=curr[1]+d[1];
                    int obs=curr[2];
                    if(i<n && j<m && i>=0 && j>=0){
                        if(mat[i][j]==0 && !visited[i][j][obs]){
                            q.add(new int[]{i,j,obs});
                            visited[i][j][obs]=true;
                        }else if(mat[i][j]==1 && obs>0 &&!visited[i][j][obs-1]){
                            q.add(new int[]{i,j,obs-1});
                            visited[i][j][obs-1]=true;
                        }
                    }
                }
            }
            distance++;
        }
        return -1;
    }
};
