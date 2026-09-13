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
                ListNode* temp=head;
        int i=0;
        
       while(i<n && temp)
       {   temp=temp->next;
           i++;
       }
        ListNode* a=new ListNode();
        ListNode* ans=a;
        ans->next=head;
        while(temp)
        {
            temp=temp->next;
            ans= ans->next;
        }
        ans->next=ans->next->next;
        return a->next;

    }
};
