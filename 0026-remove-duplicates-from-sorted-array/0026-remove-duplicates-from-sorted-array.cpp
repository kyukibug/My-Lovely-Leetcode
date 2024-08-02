class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l = 0, count = 0;
        for(int r = 0; r < nums.size(); ++r, ++l){
            while(r+1 < nums.size() && nums[r] == nums[r+1]){
                ++count;
                ++r;
            }
            
            nums[l] = nums[r];
        }
        return nums.size()-count;
    }
};