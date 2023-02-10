
class Solution{
public:
    int maxInstance(string s){
        map<char,int>mp;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a' || s[i]=='b' || s[i]=='l' || s[i]=='o' || s[i]=='n')mp[s[i]]++;
            
        }
                mp['l']/=2;
                mp['o']/=2;
                int res=INT_MAX;
                for(auto i:mp)res=min(res,i.second);
                return res;
    }
};
