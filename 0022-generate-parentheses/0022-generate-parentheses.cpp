class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> sol;
        helper("", sol, n, n);
        return sol;
    }

    void helper(string curr, vector<string> &sol, int left, int right){
        if(left == 0 && right == 0){
            sol.push_back(curr);
            return;
        }

        if(left > 0)
            helper(curr + "(", sol, left-1, right);
        if(right > left){
            helper(curr + ")", sol, left, right-1);
        }
    }
};