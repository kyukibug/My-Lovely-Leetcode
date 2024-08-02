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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = l1;
        ListNode* l1Trail;
        int carried = 0;
        
        // loop runs until shortest list ends.
        while(l1 && l2){
            carried = handleAddition(l1, l2, carried);

            l1Trail = l1;
            l1 = l1->next;
            l2 = l2->next;
        }

        // if l1 is shorter we add the remaining l2 to end of l1
        if(l2){
            l1Trail->next = l2;
            l1 = l1Trail->next;
        }

        // handle carrying the remainders...
        while(l1 && carried){
            carried = handleAddition(l1, carried);
            l1Trail = l1;
            l1 = l1->next;
        }

        if(carried){
            l1Trail->next = new ListNode(1);
        }

        return head;
    }

    // handles addition w/ carry and returns next carry
    int handleAddition(ListNode* l1, ListNode* l2, int carry){
        int ret = 0;
        l1->val = l1->val + l2->val + carry;
        if(l1->val > 9){
            l1->val -= 10;
            ret = 1;
        }
        return ret;
    }

    // same as above, just handling carrying...
    int handleAddition(ListNode* l1, int carry){
        int ret = 0;
        l1->val = l1->val + carry;
        if(l1->val > 9){
            l1->val -= 10;
            ret = 1;
        }
        return ret;
    }
};