class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char,char>mp;
        for(int i=0;i<order.size();i++)mp[order[i]]=i+'a';
        for(auto &wr:words)
        for(auto &c:wr)c=mp[c];
        return is_sorted(words.begin(),words.end());
    }
};
