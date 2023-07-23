def rob(self, root: Optional[TreeNode]) -> int:
    def dfs(root):
        if not root:
            return [0,0]
        
        leftPair = dfs(root.left)
        righ
