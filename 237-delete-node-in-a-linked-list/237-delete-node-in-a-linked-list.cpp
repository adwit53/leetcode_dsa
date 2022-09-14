class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* b=node;
        int s;
        ListNode* c=node->next;
        while(true)
        {
            if(c->next==NULL)
            {
                s=b->val;
                b->val=c->val;
                c->val=s;
               b->next=NULL;
                break;
            }
            else
            {
                s=b->val;
                b->val=c->val;
                c->val=s;
                b=b->next;
                c=c->next;
            }
        }
    }
};