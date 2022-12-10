class Solution {
public:
    long long totalTreeSum=0,result=0;
    void getTotalTreeSum(TreeNode* root)    //Get total sum of the tree.
    {
        if(!root)
            return;
        totalTreeSum+=root->val;
        getTotalTreeSum(root->left);
        getTotalTreeSum(root->right);
    }
    int SumUnder(TreeNode* root)      
    {
       if(!root)
            return 0;
       int sumUnderLeft=SumUnder(root->left),sumUnderRight=SumUnde(root->right;
       result=max({result,(totalTreeSum-sumUnderLeft)*sumUnderLeft,(totalTreeSum-sumUnderRight)*sumUnderRight});    
       return sumUnderLeft+sumUnderRight+root->val;
    }
    int maxProduct(TreeNode* root) 
    {
        getTotalTreeSum(root);
        SumUnder(root);
        return result%1000000007;
    }
};
