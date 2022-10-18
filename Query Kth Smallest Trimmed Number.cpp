class Solution {
public:   vector<int> smallestTrimmedNumbers(vector<string>& nums, vector<vector<int>>& queries) {
        vector<int  > ans(queries.size());
        int in=0;
         for(auto x: queries){
             int sz=x[1];
             int k=x[0];
            priority_queue<pair<string ,int >> pq;
             for(int i=0;i<nums.size();i++){
                  string s=nums[i].substr(nums[i].size()-sz,sz);
           
                 if(pq.size()<k) pq.push({s,i});
                 else{
                     if(pq.top().first>s){pq.pop();pq.push({s,i});}}
                     }
          
                     ans[in++]=pq.top().second;
         }
        return ans;
    }
};
