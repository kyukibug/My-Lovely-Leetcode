class Solution:
    def minPathSum(self, grid: List[List[int]]) -> int:
        memo = [[0 for _ in range(len(grid[0]))] for _ in range(len(grid))]


        for i in range(len(grid)):
            memo[i][0] = memo[i - 1][0] + grid[i][0]
        for j in range(1, len(grid[0])):
            memo[0][j] = memo[0][j - 1] + grid[0][j]

        for i in range(1, len(grid)):
            for j in range(1, len(grid[0])):
                memo[i][j] = min(memo[i][j -1], memo[i - 1][j]) + grid[i][j]

        print(memo)
        return memo[len(grid) - 1][len(grid[0]) - 1]