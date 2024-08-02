class Solution:
    def trap(self, height: List[int]) -> int:
        l, r = 0, len(height) - 1
        maxL, maxR = height[l], height[r]
        trapped = 0
        # max(min(maxL, maxR) - height[x], 0) rain water at position x
        while l < r:
            if height[l] <= height[r]:
                trapped += max(min(maxL, maxR) - height[l], 0)
                l += 1
                maxL = max(maxL, height[l])
            else:
                trapped += max(min(maxL, maxR) - height[r], 0)
                r -= 1
                maxR = max(maxR, height[r])
        return trapped