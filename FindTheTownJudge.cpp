class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int>inDegree(n+1,0);
        vector<int>outDegree(n+1,0);
        for(auto &persons:trust){
            int trusted=persons[1];
            int trusting =persons[0];
            inDegree[trusted]++;
            outDegree[trusting]++;
        }
        for(int pn=1;pn<=n;pn++){
            if(inDegree[pn]==(n-1) && outDegree[pn]==0)
            return pn;
        }
        return -1;
    }
};
