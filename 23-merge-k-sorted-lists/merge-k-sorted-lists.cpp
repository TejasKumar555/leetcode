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
    ListNode* mergeKLists(vector<ListNode*>& lists) {

         priority_queue<int, vector<int>, greater<int>> min_H;

    // Traverse each linked list and add all its node values to the heap
    for (auto it : lists) {
        while (it) {  // Advance through the linked list
            min_H.push(it->val);
            it = it->next;
        }
    }

    // Create the merged linked list
    ListNode* head = NULL;
    ListNode* temp = NULL;

    while (!min_H.empty()) {
        ListNode* t = new ListNode(min_H.top());
        min_H.pop();

        if (head == NULL) {
            head = t;
            temp = head;
        } else {
            temp->next = t;
            temp = t;
        }
    }

    return head;
    }
};