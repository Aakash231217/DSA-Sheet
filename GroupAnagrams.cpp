class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>ump;
        for(auto x:strs){
            auto temp=x;
            sort(x.begin(),x.end());
            ump[x].push_back(temp);

        }
        for(auto it:ump){
            auto t=it.second;
            ans.push_back(t);
        }
        return ans;
    }
};
