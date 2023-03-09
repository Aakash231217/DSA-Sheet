class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_map<ListNode*,int>mp;
        int i=0;
        ListNode* temporary=head;
        while(temporary!=NULL){
            if(mp.find(temporary)!=mp.end())return temporary;
            mp[temporary]=i++;
        temporary=temporary->next;
        }
        return NULL;
    }
};
