# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def minDepth(self, root: Optional[TreeNode]) -> int:
        if not root:
            return 0
            
        myQueue = deque([root])
        depth = 1
        while myQueue:
            num_nodes = len(myQueue)
            for _ in range(num_nodes):
                tempNode = myQueue.popleft()
                if tempNode:
                    if not tempNode.left and not tempNode.right:
                        return depth
                    myQueue.append(tempNode.left)
                    myQueue.append(tempNode.right)
            depth += 1
        
        return depth - 1