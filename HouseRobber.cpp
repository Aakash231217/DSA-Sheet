class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size(),prev=0,curr=0;
        for(int i=0;i<n;i++){
            int temp=max((prev+nums[i]),curr);
            prev=curr;
            curr=temp;
        }
        return curr;
    }
};
