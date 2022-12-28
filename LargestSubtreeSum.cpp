class Solution {
  public:
    // Function to find largest subtree sum.
    long int ans = INT_MIN;
    int get(Node* root)
    {
        if(root == NULL)
            return 0;
        
        long int left = get(root -> left);
        long int right = get(root -> right);
        long int cur = root-> data;
        ans =  max(ans, cur + left + right);
        return left + right + cur;
    }
    
    int findLargestSubtreeSum(Node* root)
    {
        get(root);
        return ans;
    }
};
