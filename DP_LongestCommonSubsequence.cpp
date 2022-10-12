/*
Problem Description
Given two strings text1 and text2, return the length of their longest common subsequence. If there is no common subsequence, return 0.

A subsequence of a string is a new string generated from the original string with some characters (can be none) deleted without changing the relative order of the remaining characters.

For example, "ace" is a subsequence of "abcde".
A common subsequence of two strings is a subsequence that is common to both strings.
*/

// Brute Force Approach
        class Solution {
        public:
            int pre(int n,int m,string &s1,string &s2){
                if(n < 0 or m < 0) return 0;
                if(s1[n] == s2[m]) return pre(n-1,m-1,s1,s2) + 1;
                else return max(pre(n-1,m,s1,s2),pre(n,m-1,s1,s2));
            }
            int longestCommonSubsequence(string text1, string text2) {
                return pre(text1.size()-1,text2.size()-1,text1,text2);
            }
        };

    // Dynamic Programming - Memoization Approach 
        class Solution {
        public:
            int pre(int n,int m,string &s1,string &s2,vector<vector<int>> &dp){
                if(n < 0 or m < 0) return 0;
                if(dp[n][m]!=-1) return dp[n][m];
                if(s1[n] == s2[m]) return dp[n][m] = pre(n-1,m-1,s1,s2,dp) + 1;
                else return dp[n][m] = max(pre(n-1,m,s1,s2,dp),pre(n,m-1,s1,s2,dp));
            }
            int longestCommonSubsequence(string text1, string text2) {
                int n = text1.size();
                int m = text2.size();
                vector<vector<int>> dp(n+1,vector<int> (m+1,-1));
                pre(n,m,text1,text2,dp);
                return dp[n-1][m-1];
            }
        };
        class Solution {
        public:
            int pre(int n,int m,string &s1,string &s2,vector<vector<int>> &dp){
                if(n == 0 or m == 0) return 0;
                if(dp[n][m]!=-1) return dp[n][m];
                if(s1[n-1] == s2[m-1]) return dp[n][m] = pre(n-1,m-1,s1,s2,dp) + 1;
                else return dp[n][m] = max(pre(n-1,m,s1,s2,dp),pre(n,m-1,s1,s2,dp));
            }
            int longestCommonSubsequence(string text1, string text2) {
                int n = text1.size();
                int m = text2.size();
                vector<vector<int>> dp(n+1,vector<int> (m+1,-1));
                cout<<pre(n,m,text1,text2,dp)<<endl;
                return dp[n][m];
            }
        };

    // Dynamic Programming - Tabulation Approach 
        class Solution {
        public:
            int longestCommonSubsequence(string s1, string s2) {
                int n = s1.size();
                int m = s2.size();
                vector<vector<int>> dp(n+1,vector<int> (m+1,0));
                
                for(int i =0;i<=n;i++){
                    for(int j=0;j<=m;j++){
                        if(i == 0 or j == 0) dp[i][j] = 0;
                        else{
                            if(s1[i-1] == s2[j-1]) dp[i][j] = 1 + dp[i-1][j-1];
                            else dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                        }
                    }
                }
                
                return dp[n][m];
            }
        };

    // Dynamic Programming - Optimized Tabulation Approach
        class Solution {
        public:
            int longestCommonSubsequence(string s1, string s2) {
                int n = s1.size();
                int m = s2.size();
                vector<int> dp(m+1,0),curr(m+1,0);
                
                for(int i =0;i<=n;i++){
                    for(int j=0;j<=m;j++){
                        if(i == 0) dp[j] = 0;
                        else if(j == 0) curr[j] = 0;
                        else{
                            if(s1[i-1] == s2[j-1]) curr[j] = 1 + dp[j-1];
                            else curr[j] = max(dp[j],curr[j-1]);
                        }
                    }
                    dp = curr;
                }
                
                return dp[m];
            }
        };
