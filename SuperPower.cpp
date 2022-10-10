class Solution {
public:
    int binExp(int a, int b, int m){
        a%=m;
        int ans=1;
        while(b>0){
            if(b&1){
                ans=(ans*1LL*a)%m;
            }
            a=(a*1LL*a)%m;
            b/=2;
        }
        return ans;
    }
    int superPow(int a, vector<int>& b) {
        int bmod=0;
        for(auto val:b){
            bmod=(bmod*10+val)%1140;
        }
        return binExp(a,bmod,1337);
        
    }
};
