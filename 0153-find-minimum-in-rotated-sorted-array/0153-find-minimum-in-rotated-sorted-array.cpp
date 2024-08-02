class Solution {
public:
    int findMin(vector<int>& nums) {
        // if(nums.size() == 1)
        //     return nums[0];
        int l = 0, r = nums.size()-1, m = l + (r-l)/2;
        int sol = nums[0];
        
        while(l<=r){
            sol = std::min(nums[m], sol);
            if(nums[m] >= nums[0])
                l = m + 1;
            else
                r = m - 1;
            m = l + (r-l)/2;
        }
        return sol;
    }
};