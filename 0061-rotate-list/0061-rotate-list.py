# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def rotateRight(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        if head is None:
            return head
        
        # count the num nodes in list
        lastNode = head
        count = 1
        while lastNode.next:
            lastNode = lastNode.next
            count += 1
        
        k = k % count

        if k == 0:
            return head

        # find kth node
        i = 0
        tempNode = head
        while i < count - k - 1:
            tempNode = tempNode.next
            i += 1
        
        newHead = tempNode.next
        tempNode.next = None
        lastNode.next = head

        return newHead