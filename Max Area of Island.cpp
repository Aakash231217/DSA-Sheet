
// Problem Link : https://leetcode.com/problems/max-area-of-island/

// Idea:
// So we can just use a simple iteration through the grid and look for islands. When we find an island, we can use a recursive helper function (trav) to sum up all the connected pieces of land and return the total land mass of the island.

// As we traverse over the island, we can replace the 1s with 0s to prevent "finding" the same land twice. We can also keep track of the largest island found so far (ans), and after the grid has been fully traversed, we can return ans.

// Time Complexity: O(N * M) where N and M are the lengths of the sides of the grid
// Space Complexity: O(L) where L is the size of the largest island, representing the maximum recursion stack
// or O(N * M + L) if we create an N * M matrix in order to not modify the input


class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans = 0;
        n = grid.size(), m = grid[0].size();
        for (int i = 0; i < n; i++) 
            for (int j = 0; j < m; j++)
                if (grid[i][j]) ans = max(ans, trav(i, j, grid));
        return ans;
    }
private:
    int n, m;
    int trav(int i, int j, vector<vector<int>>& grid) {
        if (i < 0 || j < 0 || i >= n || j >= m || !grid[i][j]) return 0;
        grid[i][j] = 0;
        return 1 + trav(i-1, j, grid) + trav(i, j-1, grid) + trav(i+1, j, grid) + trav(i, j+1, grid);
    }
};
