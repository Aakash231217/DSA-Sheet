class Solution {
  public:
    vector<Node*> findAnagrams(struct Node* head, string s) {
        // code here
        if(!head)return {};
        vector<Node*>ans;
        int n=s.size();
        vector<int>a(26),b(26);
        for(int i=0;i<n;i++)
        a[s[i]-'a']++;
        Node *curr=head, *prev=head;
        int len=0;
        while(curr!=NULL){
            b[curr->data-'a']++;
            len++;
            if(a==b){
                ans.push_back(prev);
                prev=curr->next;
                curr->next=NULL;
                curr=prev;
                for(int i=0;i<26;i++)b[i]=0;
                len=0;
            }
            else{
                curr=curr->next;
                if(len>=n){
                    b[prev->data-'a']--;
                    prev=prev->next;
                }
            }
        }
        return ans;
    }
};
