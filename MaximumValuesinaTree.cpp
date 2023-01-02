vector<int> maximumValue(Node* node) {

        vector<int> res;

        queue<Node*> q;

        if(node==NULL)return res;

        q.push(node);

        while(!q.empty()){

            int mx=INT_MIN;

            int n=q.size();

            for(int i=0;i<n;i++){

                Node *temp=q.front();

                q.pop();

                mx=max(mx,temp->data);

                if(temp->left)q.push(temp->left);

                if(temp->right)q.push(temp->right);

            }

            res.push_back(mx);

        }

        return res;

    }
