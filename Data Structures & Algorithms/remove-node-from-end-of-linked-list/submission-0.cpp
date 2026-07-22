class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode*temp=head;
        int sz=0;
        while(temp!=NULL){
            sz++;
            temp=temp->next;
        }
        if (sz == 1) return NULL;

        if (n == sz) return head->next;
 
        temp=head;
        int k=sz-n-1;
        while(k--) temp=temp->next;
        if(temp->next!=NULL) temp->next=temp->next->next;
        return head;
    }
};
