/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* a= head;
        ListNode* b;
        int i=1;
        ListNode* t=head,*s=head;
        if(head->next==NULL && n==1)
        {
            return NULL;
        }
        while(t->next!=NULL)
        {
            i++;
            t=t->next;
        }
        i++;
        int k=1;
        if(i-n==1)
        {
            head=head->next;
            return head;
        }
        while(a!=NULL)
        {
            if(k==i-n)
            {
             s->next=a->next;
                break;
            }
                s=a;
                a=a->next;
                
            k++;
        }
        return head;
    }
};