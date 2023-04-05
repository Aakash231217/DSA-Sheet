class Solution {
public:
   unordered_map<string,bool>mp;

    bool isConcatenated(string word, unordered_set<string>&st){
        int l=word.length();
        if(mp.find(word)!=mp.end())return mp[word];
        for(int i=0;i<l;i++){
            string prefix=word.substr(0,i+1);
            string suffix=word.substr(i+1);
            if((st.find(prefix)!=st.end() && st.find(suffix)!=st.end() )or 
            st.find(prefix)!=st.end() && isConcatenated(suffix,st))
            return mp[word]=true;
        }
        return mp[word]=false;
    }
    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
        int n=words.size();
        unordered_set<string>st(words.begin(),words.end());
        vector<string>result;
        for(int i=0;i<n;i++){
            string word=words[i];
            if(isConcatenated(word,st)){
                result.push_back(word);
            }
        }
        return result;
    }
};
