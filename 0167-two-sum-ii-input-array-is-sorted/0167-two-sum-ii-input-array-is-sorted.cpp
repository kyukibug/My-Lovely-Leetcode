class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> sol(2);
        int a = 0;
        int b = numbers.size()-1;
        while(true){
            int x = numbers[a] + numbers[b];
            if(x == target){
                return{a+1, b+1};
            }
            else if(x > target)
                b--;
            else
                a++;
        }
    }
};