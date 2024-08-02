class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
     // find what row target is in
     int l = 0, r = matrix.size()-1, m;
     while(!(matrix[m][0] <= target && target <= matrix[m][matrix[0].size()-1])){
        m = (r - l)/2 + l;
         if(r < l)
            return false;
         if(target < matrix[m][0]){
            r = m - 1;
         }
         else{
            l = m + 1;
         }

     }

    int row = m;
    l = 0, r = matrix[0].size()-1, m = (r - l)/2 + l;
     //find what col target is in
     while(matrix[row][m] != target){
         m = (r - l)/2 + l;
         if(r < l)
            return false;
         if(target < matrix[row][m]){
            r = m - 1;
         }
         else{
            l = m + 1;
         }
     }

     return true;
    }
};