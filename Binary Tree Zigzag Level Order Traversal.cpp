class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        vector<vector<int>> res;
        if(!root)
            return res;
        
        q.push(root);
        while(q.size())
        {
            int n = q.size();
            vector<int> temp;
            for(int i=0;i<n;i++)
            {
                TreeNode *ptr = q.front();
                q.pop();
                if(ptr->left)
                    q.push(ptr->left);
                if(ptr->right)
                    q.push(ptr->right);
                
                temp.push_back(ptr->val);
            }
            res.push_back(temp);
        }
        
        for(int i=0;i<res.size();i++)
        if(i&1)
        reverse(res[i].begin(), res[i].end());
        
        return res;
    }
};
