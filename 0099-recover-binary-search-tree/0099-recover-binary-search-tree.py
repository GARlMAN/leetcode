# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def recoverTree(self, root: Optional[TreeNode]) -> None:
        """
        Do not return anything, modify root in-place instead.
        """
        def inorder(root):
            if not root:
                return
            inorder(root.left)
            arr.append(root)
            new_arr.append(root.val)
            inorder(root.right)
        arr=[]
        new_arr=[]
        inorder(root)
        new_arr = sorted(new_arr)
        for index, i in enumerate(new_arr):
            if(arr[index].val != i):
                arr[index].val = i


        return root
        