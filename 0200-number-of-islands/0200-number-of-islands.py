class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        myQueue = deque()
        directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
        count = 0
        for i in range(len(grid)):
            for j in range(len(grid[0])):
                if grid[i][j] == '1':
                    myQueue.append((i, j))
                    count += 1
                while myQueue:
                    x, y = myQueue.popleft()
                    if 0 <= x < len(grid) and 0 <= y < len(grid[0]) and grid[x][y] == '1':
                        grid[x][y] = '0'
                        for dx, dy in directions:
                            myQueue.append((x + dx, y + dy))
        
        return count