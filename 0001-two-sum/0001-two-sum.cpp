class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> idk;
        for(int i = 0 ; i < nums.size(); ++i){
            int complement = target-nums[i];
            auto it = idk.find(complement);
            if(it != idk.end()){
                return {it->second, i};
            }
            idk[nums[i]] = i;
        }
        return {-1, -1};
    }
};