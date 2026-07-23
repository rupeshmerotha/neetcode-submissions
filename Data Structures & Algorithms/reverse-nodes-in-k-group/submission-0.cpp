class Solution {
public:
    ListNode* reverseList(ListNode* head){
        ListNode *prev = nullptr, *curr = head;
        while (curr) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode*temp=head;
        int sz=0;
        while(temp!=NULL){
            temp=temp->next;
            sz++;
        }
        if(sz<k) return head;
        temp=head;
        int step=k;
        while(step>1){
            temp=temp->next;
            step--;
        }
        ListNode* nextGroup=temp->next;
        temp->next=nullptr;
        ListNode* newhead=reverseKGroup(nextGroup, k);

        ListNode* head2=reverseList(head);
        head->next=newhead;

        return head2;
                

    }
};
