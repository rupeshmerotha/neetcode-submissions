class Solution {
public:

    ListNode* merge(ListNode*l1, ListNode*l2){
        ListNode*dummy=new ListNode(0);
        ListNode*temp=dummy;
        while(l1!=NULL && l2!=NULL){
            if(l1->val<=l2->val){
                temp->next=l1;
                temp=l1;
                l1=l1->next;
            }
            else{
                temp->next=l2;
                temp=l2;
                l2=l2->next;
            }
        }
        if(l1!=NULL) temp->next=l1;
        else temp->next=l2;
        return dummy->next;
        
    }

    ListNode* mergeKLists(vector<ListNode*>&v){
        int n=v.size();
        if(n==0) return NULL;
        if(n==1) return v[0];
        int right=n-1;
        while(right>0){
            int i=0;
            int j=right;
            while(i<j){
                v[i]=merge(v[i],v[j]);
                i++; j--;
                if(i>=j) right=j;
            }
        }
        return v[0];
    }
};