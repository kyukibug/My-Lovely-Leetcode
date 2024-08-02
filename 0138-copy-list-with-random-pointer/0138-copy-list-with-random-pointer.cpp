/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head)
            return head;
        std::unordered_map<Node*, Node*> m;
        Node* copy_head = new Node(head->val);
        m[head] = copy_head;
        Node* orig = head->next;
        Node* copy = copy_head;
        while(orig){
            Node* temp = new Node(orig->val);
            m[orig] = temp;
            copy->next = temp;
            copy = temp;
            orig = orig->next;
        }
        orig = head;
        copy = copy_head;
        m[nullptr] = nullptr;
        while(orig){
            copy->random = m[orig->random];
            copy = copy->next;
            orig = orig->next;
        }
        return copy_head;
    }
};