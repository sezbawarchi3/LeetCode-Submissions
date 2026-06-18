class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        int rowstart = 0, rowend = matrix.size()-1, colstart = 0, colend = matrix[0].size()-1, count = 0;
        vector<int> sol;
        while (count < n*m){
            for(int i(colstart); i <= colend; i++){
                sol.push_back(matrix[rowstart][i]);
                count++;
            }
            rowstart++;
            if(count == n*m) break;
            
            for(int i(rowstart); i <= rowend; i++){
                sol.push_back(matrix[i][colend]);
                count++;
            }
            colend--;
            if(count == n*m) break;
            
            for(int i(colend); i >= colstart; i--){
                sol.push_back(matrix[rowend][i]);
                count++;
            }
            rowend--;
            if(count == n*m) break;
            
            for(int i(rowend); i >= rowstart; i--){
                sol.push_back(matrix[i][colstart]);
                count++;
            }
            colstart++;
            if(count == n*m) break;
        }
        return sol;
    }
};