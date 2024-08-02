class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size() == 1)
            return nums[0];
        if(nums.size() == 2)
            return std::max(nums[0], nums[1]);
        return std::max(robHelper(vector<int>(nums.begin(), nums.end() - 1)), 
                        robHelper(vector<int>(nums.begin() + 1, nums.end())));
    }
    int robHelper(vector<int> nums){
        vector<int> memo(nums.size());
        memo[0] = nums[0];
        memo[1] = std::max(nums[0], nums[1]);

        for(int i = 2; i < nums.size(); ++i)
            memo[i] = std::max(memo[i-1], nums[i] + memo[i-2]);
        
        return memo[nums.size()-1];
    }
};