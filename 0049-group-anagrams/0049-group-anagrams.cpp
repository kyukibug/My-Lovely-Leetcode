class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for(string i : strs){
            string temp = i;
            sort(i.begin(), i.end());
            mp[i].push_back(temp);
        }
        vector<vector<string>> ret;
        ret.reserve(mp.size());
        for(pair i : mp){
            ret.push_back(i.second);
        }
        return ret;
    }
};