lass Solution {
public:
    int n;
    int dp[52];
    unordered_set<string>st;
    int solve(int i, string &s){
        if(i>=n)return 0;
        if(dp[i]!=-1)return dp[i];
        int minExtra=INT_MAX;
        string currStr="";
        for(int j=i;j<n;j++){
            currStr.push_back(s[j]);
        int currExtra=(st.find(currStr)==st.end())?currStr.length():0;
        int remainExtra= solve(j+1,s);
        int total=currExtra+remainExtra;
        minExtra=min(minExtra,total);
        }
        return dp[i]=minExtra;
    }
    int minExtraChar(string s, vector<string>& dictionary) {
        n=s.length();
        memset(dp,-1,sizeof(dp));
        for(auto &word:dictionary){
            st.insert(word);
        }
        return solve(0,s);
    }
};
