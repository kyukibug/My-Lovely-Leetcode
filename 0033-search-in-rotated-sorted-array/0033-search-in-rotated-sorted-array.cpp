class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size()-1, m;

        while(l <= r){
            m = (r-l)/2 + l;
            if(nums[m] == target)
                return m;
            // if on left (sorted) side
            if(nums[l] <= nums[m]){
                if(target < nums[l] || target > nums[m])
                    l = m + 1;     
                else
                    r = m - 1;
            }
            // if on right (unsorted) side
            else{
                if(target > nums[r] || target < nums[m])
                    r = m - 1;
                else
                    l = m + 1;
            }
        }

        return -1;
    }
};