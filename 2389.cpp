class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(),nums.end());
        vector<int>result;
        for(int i=1;i<nums.size();i++)nums[i]+=nums[i-1];
        for(auto x:queries){
            int index=upper_bound(nums.begin(),nums.end(),x)-nums.begin();
            result.push_back(index);

        }
        return result;
    }
};
