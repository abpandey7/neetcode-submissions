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
    ListNode* reverseList(ListNode* head)
    {
        if(head == nullptr){return head;}
        
        stack<ListNode*> stk;

        ListNode* dummy1 = head;
        while(dummy1 != nullptr)
        {
            stk.push(dummy1);
            dummy1 = dummy1->next;
        }

        ListNode* dummy2 = stk.top();
        ListNode* newHead = dummy2;
        stk.pop();
        while (!stk.empty())
        {
            dummy2->next = stk.top();
            stk.pop();
            dummy2 = dummy2->next;
        }

        dummy2->next = nullptr;

        return newHead;
    }
};
