class Solution
{
    public:
    pair<int, bool> solve(Node* root, int &ans)
    {
        if(root == NULL) return {0, true};
        
        pair<int, bool> left = solve(root -> left, ans);
        pair<int, bool> right = solve(root -> right, ans);
        
        bool LeftAll = left.second, RightAll = right.second;
        
        if(((left.first == 0 || left.first == root -> data) && LeftAll) && ((right.first == 0 || right.first == root -> data) && RightAll))
        {
            ans++;
        }
        
        if(left.first != 0 && left.first != root -> data) LeftAll = false;
        if(right.first != 0 && right.first != root -> data) RightAll = false;
        
        return {root -> data, (LeftAll && RightAll)};
        
    }
    int singlevalued(Node *root)
    {
        //code here
        int ans = 0;
        solve(root, ans);
        return ans;
    }
    
};
