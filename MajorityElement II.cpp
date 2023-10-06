class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>result;
        set<int>st;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }
        for(int num:st){
            int count=0;
            for(int n:nums){
                if(n==num)count++;
            }
            if(count>nums.size()/3){
                result.push_back(num);
            }
        }
        return result;

    }
};
