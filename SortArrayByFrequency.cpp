class Solution {
public:
   static bool comp(vector<int>a, vector<int>b){
        if(a[0]<b[0])return true;
        if(a[0]==b[0]){
            return a[1]>b[1];
        }
        return false;
    }
    vector<int> frequencySort(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>ans;
        unordered_map<int,int>ump;
        for(int i=0;i<n;i++){
             ump[nums[i]]++;
        }
       for(auto it:ump){
           ans.push_back({it.second,it.first});
       }
       sort(ans.begin(),ans.end(),comp);
       vector<int>result;
       for(auto a:ans){
           int x=a[0];
           while(x--){
               result.push_back(a[1]);
           }
       }
       return result;
    }
};
