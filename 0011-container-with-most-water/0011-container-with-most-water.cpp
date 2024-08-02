class Solution {
public:
    int maxArea(vector<int>& height) {
        int sol = 0;
        
        int a = 0, b = height.size()-1;
        while(a<b){
            sol = max((b-a)*min(height[a], height[b]), sol);
            if(height[a] > height[b])
                b--;
            else
                a++;
        }
        return sol;
    }
};