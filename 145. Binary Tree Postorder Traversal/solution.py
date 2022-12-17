# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def postorderTraversal(self, root):
        if root is None: return []
        d = []
        out = []
        d.append((root,0))
        while len(d)>0:
            node, k = d.pop()
            if k == 0:
                d.append((node, k+1))
                if node.left is not None:
                    d.append((node.left, 0))
            elif k == 1:
                d.append((node, k+1))
                if node.right is not None:
                    d.append((node.right, 0))
            else:
                out.append(node.val)
        return out
