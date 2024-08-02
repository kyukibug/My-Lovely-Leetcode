# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isBalanced(self, root: Optional[TreeNode]) -> bool:
        return self.isBalancedWithHeight(root)[0]
        
    # returns list of size 2 with isBalanced and Height
    def isBalancedWithHeight(self, root) -> List:
        if not root:
            return [True, 0]
        
        left_side_is_balanced, left_side_height = self.isBalancedWithHeight(root.left)
        right_side_is_balanced, right_side_height = self.isBalancedWithHeight(root.right)
        height_dif = abs(right_side_height - left_side_height)

        return [left_side_is_balanced and right_side_is_balanced and height_dif <= 1, max(left_side_height, right_side_height) + 1]
