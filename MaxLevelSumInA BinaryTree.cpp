class Solution{
  public:
    /*You are required to complete below method */
    int maxLevelSum(Node* root) {
        // Your code here
        int maxi=INT_MIN;
        queue<Node*>q;
        int sum=0;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            int sum=0;
            while(n--){
                Node *t=q.front();
                q.pop();
                sum+=t->data;
                if(t->left){
                    q.push(t->left);
                }
                if(t->right){
                    q.push(t->right);
                }
                
            }
            maxi=max(sum,maxi);
        }
        return maxi;
    }
};
