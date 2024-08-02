class Solution:
    def rob(self, nums: List[int]) -> int:
        if len(nums) == 1:
            return nums[0]

        memo = [-1 for _ in range(len(nums))]
        memo[0] = nums[0]
        memo[1] = max(nums[0], nums[1])
        self.helper(len(nums) - 1, nums, memo)
        return memo[len(nums) - 1]

    def helper(self, house, nums, memo):
        if memo[house] != -1:
            return memo[house]
        
        memo[house] = max(self.helper(house - 1, nums, memo), self.helper(house - 2, nums, memo) + nums[house])
        return memo[house]
