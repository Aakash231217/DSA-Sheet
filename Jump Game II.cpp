class Solution {
public:
    int jump(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        int farstart=0;
        int farend=0;
        for(int i=0;i<n-1;i++){
            farend=max(farend,i+nums[i]);
            if(i==farstart){ans++;
            farstart=farend;}
        }
        return ans;

    }
};
