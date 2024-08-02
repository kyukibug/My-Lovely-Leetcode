class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> sol;
        int prev;

        for(int i = 0; i < nums.size() - 2; ++i){
            if(nums[i] == prev) {
                prev = nums[i];
                continue;
            }
            int l = i + 1;
            int r = nums.size() - 1;
            while(l < r){
                int sum = nums[i] + nums[l] + nums[r];
                if(sum == 0){
                    sol.push_back({nums[i], nums[l], nums[r]});
                    while(l < r && nums[l] == nums[l + 1]) l++;
                    while(l < r && nums[r] == nums[r - 1]) r--;
                    l++;
                    r--;
                }
                else if(sum > 0){
                    r--;
                }
                else{
                    l++;
                }
            }

            prev = nums[i];
        }
        return sol;
    }
};