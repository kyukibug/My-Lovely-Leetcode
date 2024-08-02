class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int x = prices[0];
        int sol = 0;
        for(int i = 1; i < prices.size(); ++i){
            x = std::min(x, prices[i]);
            sol = std::max(sol, prices[i] - x);
        }
        return sol;
    }
};