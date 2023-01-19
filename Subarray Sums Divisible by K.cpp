class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n=nums.size();
        int ans=0;
        vector<int>prefix(k,0);
        int sum=0;
        prefix[0]++;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            int rem=(sum%k+k)%k;
            ans+=prefix[rem];
            prefix[rem]++;
            
        }
        return ans;
    }
};
