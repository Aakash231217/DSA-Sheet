class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int high=accumulate(weights.begin(),weights.end(),0);
        while(low<high){
            int need=1,sum=0;
            int mid=low+(high-low)/2;
            for(auto w:weights){
                if(sum+w>mid){
                    sum=0;
                    need++;
                }
                sum+=w;
            }
            if(need<=days){
                high=mid;
            }else{
                low=mid+1;
            }
        }
        return high;
    }
};
