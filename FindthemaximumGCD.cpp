class Solution
{
    int maxi=0;
    int ans=0;
    int solve(Node * root){
        if(root==NULL)return -1;
        int lefty=solve(root->left);
        int righty=solve(root->right);
        if((lefty!=-1) && (righty!=-1)&& __gcd(lefty,righty)>maxi){
            maxi=__gcd(lefty,righty);
            ans=root->data;
            
        }   
        return root->data;
        
    }
public:
    int maxGCD( Node* root)
    {
        if(!root)return 0;
        solve (root);
        return ans;
        //code here
    }
};
