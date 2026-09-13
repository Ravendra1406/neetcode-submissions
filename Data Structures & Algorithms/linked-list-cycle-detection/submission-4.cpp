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
    bool hasCycle(ListNode* head) {
        if(!head || !head->next)
        return false;
    ListNode * low=head->next;
    ListNode * high=head->next->next;
    while(high && high->next)
    {
        if(low==high)
        return true;
        low=low->next;
        high=high->next->next;
    }
    return false;

    }
};
