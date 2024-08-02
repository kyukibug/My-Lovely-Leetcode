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
        ListNode* a = head;
        for(int i = 0; i < n; ++i){
            a = a->next;
        }

        if(!a){
            return head->next;
        }

        ListNode* b = head;
        while(a && a->next){
            a = a->next;
            b = b->next;
        }

        if(b->next)
            b->next = b->next->next;

        return head;
    }
};