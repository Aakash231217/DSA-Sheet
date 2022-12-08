class Solution {
private:
     void leaf(TreeNode *root, vector<int>&v){
         if(root==NULL)return;
         if((root->left==NULL)and (root->right==NULL))v.push_back(root->val);
         if(root->left!=NULL)leaf(root->left,v);
         if(root->right!=NULL)leaf(root->right,v);

     }
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>v1,v2;
        leaf(root1,v1);
        leaf(root2,v2);
        if(v1.size()!=v2.size())return false;
        for(int i=0;i<v1.size();i++){
            if(v1[i]!=v2[i])return false;
        }
        return true;

    }
};
