class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
        unordered_set<int> mySet;
        for(auto i : nums){
            mySet.insert(i);
        }

        int length = 1;
        for(auto i : nums){
            // if previous consec exists
            if(mySet.find(i-1) != mySet.end())
                continue;
            int tempLen = 1;
            while(mySet.find(++i) != mySet.end()){
                mySet.erase(i);
                tempLen++;
            }
            length = std::max(length, tempLen);
        }
        return length;
    }
};