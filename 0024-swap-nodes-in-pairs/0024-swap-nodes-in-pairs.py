# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def swapPairs(self, head: Optional[ListNode]) -> Optional[ListNode]:
        # edge cases ?

        tempNode = tempPrev = ListNode(0, next=head)

        while tempNode.next and tempNode.next.next:
            a = tempNode.next
            b = tempNode.next.next

            a.next = b.next
            b.next = a
            tempNode.next = b
 
            tempNode = a

        return tempPrev.next