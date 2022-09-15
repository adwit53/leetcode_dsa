/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* tempb=headB;
        while(headA!=NULL)
        {
            while(tempb!=NULL)
            {
                if(tempb==headA)
                {
                    return tempb;
                }
                else
                {
                    tempb=tempb->next;
                }
            }
            headA=headA->next;
            tempb=headB;
      
        }
        return NULL;
    }
    
};