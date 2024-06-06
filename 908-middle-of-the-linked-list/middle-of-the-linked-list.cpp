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
    ListNode* middleNode(ListNode* head) {



        ListNode* temp = head;
        int cnt=0;
        while(temp)
        {
            cnt++;
            temp=temp->next;
        }


        int k=(cnt/2)+1;


        ListNode* t=head;
        int m=0;

        while(t)
        {
            m++;
            if(m==k)
            break;


            t=t->next;
        }


        return t;


        
    }
};