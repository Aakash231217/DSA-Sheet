class Solution {
public:
    void solve(vector<int>&nums,int index,vector<int>temp,set<vector<int>>&ans){     if(index>=nums.size()){
            // Only insert into ans if output has more than one element
            if(temp.size()>1)
                ans.insert(temp);
            return ;
        }
        if(temp.size()==0 || nums[index]>=temp.back()){
             temp.push_back(nums[index]);
            solve(nums, index+1,temp,ans);
            temp.pop_back();
        }
        
        solve(nums,index+1,temp,ans);
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
       vector<int>temp;
       set<vector<int>>ans;
       solve(nums,0,temp,ans);
       return vector(ans.begin(),ans.end()); 
    }
};
