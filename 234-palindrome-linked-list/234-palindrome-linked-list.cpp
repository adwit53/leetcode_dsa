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
    bool isPalindrome(ListNode* head) {
        ListNode* head2;
        head2=head;
        vector<int> a;
        int ctr=0;
        while(head!=NULL)
        {
            ctr++;
            a.push_back(head->val);
            head=head->next;
            
        }
        auto j=a.begin();
        int k=ctr/2;
        // if(ctr%2==1)
        // {
        //     a.erase(j+k);
        // }
        for(int i=0;i<k;i++)
        {
            if(a[i]!=a[ctr-1-i])
            {
                return false;
            }
        }
        return true;
    }
};