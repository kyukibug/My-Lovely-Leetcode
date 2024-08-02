class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::unordered_set<int> dups;
        for(auto i : nums){
            if(!dups.insert(i).second)
                return true;
        }
        return false;
    }
};