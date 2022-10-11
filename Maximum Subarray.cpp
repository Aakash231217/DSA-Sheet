
// Problrm Link : https://leetcode.com/problems/maximum-subarray/

// ✔️ Solution - III (Dynamic Programming - Memoization)

// We can observe a lot of repeated calculations if we draw out the recursive tree for above solution -


//                                                 f(0, False)                       🔽 => repeated calculations
// 					                          /             \ 
//                        		       f(1, False)              f(1, True)
// 			                      /          \       🔽          \      🔽
// 			                 f(2, False)      f(2, True)           f(2, True)
// 							/            \  🔽       \   🔽           \  🔽
// 						f(3, False)   f(3,True)     f(3, True)           f(3, True)
// 						/        \            \           \                  \
// 				      ...        ...          ...         ...                ...




// These redundant calculations can be eliminated if we store the results for a given state and reuse them later whenever required 
// rather than recalculating them over and over again.

// Thus, we can use memoization technique here to make our solution more efficient. 
// Here, we use a dp array where dp[mustPick][i] denotes the maximum sum subarray starting 
// from i and mustPick denotes wheter the current element must be picked compulsorily or not.

class Solution {
public:
    int maxSubArray(vector<int>& nums) {    
        vector<vector<int>> dp(2, vector<int>(size(nums), -1));
        return solve(nums, 0, false, dp);
    }
    int solve(vector<int>& A, int i, bool mustPick, vector<vector<int>>& dp) {
        if(i >= size(A)) return mustPick ? 0 : -1e5;
        if(dp[mustPick][i] != -1) return dp[mustPick][i];
        if(mustPick)
            return dp[mustPick][i] = max(0, A[i] + solve(A, i+1, true, dp));
        return dp[mustPick][i] = max(solve(A, i+1, false, dp), A[i] + solve(A, i+1, true, dp));
    }
};
