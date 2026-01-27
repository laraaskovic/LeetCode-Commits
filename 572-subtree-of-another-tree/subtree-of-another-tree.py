# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isSubtree(self, root: Optional[TreeNode], subRoot: Optional[TreeNode]) -> bool:
        if not root: return False

        #now equal:
        b = self.isSameTree(root, subRoot)

        if b:
            return True
        
        return self.isSubtree(root.left, subRoot) or self.isSubtree(root.right, subRoot)


    def isSameTree(self, p: Optional[TreeNode], q: Optional[TreeNode]) -> bool:

        if not q and not p:
            return True
        elif not q or not p:
            return False
        
        if p.val != q.val:
            return False
                     
        return self.isSameTree(q.left, p.left) and self.isSameTree(q.right, p.right)

        