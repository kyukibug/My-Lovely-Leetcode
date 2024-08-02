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
    void reorderList(ListNode* head) {
        int length = 0;
        ListNode* temp = head;
        std::stack<ListNode*> myStack;
        while(temp){
            myStack.push(temp);
            temp = temp->next;
            length++;
        }

        temp = head;
        for(int i = 0; i < length/2; ++i){
            ListNode* x = myStack.top();
            myStack.pop();
            x->next = temp->next;
            temp->next = x;
            temp = x->next;
        }

        temp->next = nullptr;
    }
};