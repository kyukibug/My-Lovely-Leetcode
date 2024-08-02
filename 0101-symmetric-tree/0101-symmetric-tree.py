# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isSymmetric(self, root: Optional[TreeNode]) -> bool:
        return self.compare(root.left, root.right)

    def compare(self, left_node, right_node):
        if not left_node and not right_node:
            return True

        if not left_node or not right_node or left_node.val != right_node.val:
            return False
        
        return self.compare(left_node.left, right_node.right) and self.compare(left_node.right, right_node.left)
        