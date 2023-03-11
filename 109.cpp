class Solution {
public:
    TreeNode* solve(int i,int j,vector<int>&ans){
        if(i>j)return NULL;
        int mid=i+(j-i)/2;
        TreeNode* root=new TreeNode(ans[mid]);
        root->left=solve(i,mid-1,ans);
        root->right=solve(mid+1,j,ans);
        return root; 
    }
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int>ans;
        while(head){
            ans.push_back(head->val);
            head=head->next;
        }
        int n=ans.size();
        return solve(0,n-1,ans);
    }
};
