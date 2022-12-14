vector<int> findRange(string str, int n) {
        int left=-1,right=-1,cur=0,mx=0,l=0;
        for(int i=0;i<n;i++){
            cur+=2*(str[i]=='0')-1;
            if(cur<0){
                l=i+1;
                cur=0;
            }
            else if(cur>mx){
                left=l;
                right=i;
                mx=cur;
            }
        }
        if(right==-1){
            return {-1};
        }
        return {left+1,right+1};
    }
