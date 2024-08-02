class Solution:
    def canJump(self, nums: List[int]) -> bool:
        if len(nums) == 1:
            return True

        last_index = len(nums) - 1
        for i in range(len(nums) - 1, -1, -1):
            if nums[i] >= last_index - i:
                last_index = i
        
        if last_index == 0:
            return True
        return False