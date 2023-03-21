class Solution{
public:
    int minimumTime(int N,int cur,vector<int> &pos,vector<int> &time){
        int mini=INT_MAX;
        for(int i=0;i<N;i++){
            int m=abs(cur-pos[i])*time[i];
            if(m<mini)mini=m;
        }
        return mini;
    }
};
