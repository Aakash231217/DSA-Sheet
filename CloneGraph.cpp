class Solution {
public: 
    unordered_map<Node*,Node*>m;
    Node* cloneGraph(Node* node) {
        if(!node)return NULL;
        Node* head=new Node(node->val);
        m[node]=head;
        for(auto i:node->neighbors){
            if(m.count(i))head->neighbors.push_back(m[i]);
            else {
               head->neighbors.push_back(cloneGraph(i));}

        }
        return head;
    }
};
