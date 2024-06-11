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

    ListNode* rev(ListNode* he)
    {
        ListNode* prev = NULL;
        ListNode* curr = he;

        while(curr != NULL){
            ListNode* forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
            
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {

        ListNode* slow=head;
        ListNode* fast=head;

        while(fast->next!=NULL&&fast->next->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;

        }

        ListNode* newhead= rev(slow->next);


        ListNode* first=head;
        ListNode* second=newhead;

        while(second!=NULL)
        {
            if(first->val!=second->val)
            {
                rev(newhead);
                return false;
            }

            first=first->next;
            second=second->next;
        }

        rev(newhead);
        return true;
        
    }
};