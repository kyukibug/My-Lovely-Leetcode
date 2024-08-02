class Solution:
    def climbStairs(self, n: int) -> int:
        if n == 1:
            return 1
        if n == 2:
            return 2
        a, b, c = 1, 2, 3
        for _ in range(3, n + 1):
            c = a + b
            a = b
            b = c
        return c