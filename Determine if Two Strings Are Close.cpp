class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int n1=word1.size();
        int n2=word2.size();
        if(n1!=n2)return false;
        unordered_map<char,int>m1,m2;
        for(int i=0;i<n1;i++){
            m1[word1[i]]++;
            m2[word2[i]]++;

        }
        for(int i=0;i<n1;i++){
            if(!m2[word1[i]])return false;
        }
        vector<int>a,b;
        for(auto i:m1)a.push_back(i.second);
        for(auto i:m2)b.push_back(i.second);
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        if(a==b)return true;
        return false;
    }
};
