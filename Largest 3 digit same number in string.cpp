class Solution {
public:
    string largestGoodInteger(string nums) {
        int n=nums.length();
        char maxi=' ';
        for(int i=2;i<n;i++){
            if(nums[i]==nums[i-1] && nums[i]==nums[i-2])
           maxi=max(maxi,nums[i]);
        }
        if(maxi==' '){
            return "";
        }
        return string(3,maxi);
    }
};
