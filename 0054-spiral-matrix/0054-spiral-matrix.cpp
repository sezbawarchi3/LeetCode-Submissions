class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rowstart = 0, rowend = matrix.size()-1, colstart = 0, colend = matrix[0].size()-1, count = 0;
        vector<int> sol;
        while (count < matrix.size() * matrix[0].size()){
            for(int i(colstart); i <= colend; i++){
                sol.push_back(matrix[rowstart][i]);
                count++;
            }
            rowstart++;
            if(count == matrix.size() * matrix[0].size()) break;
            
            for(int i(rowstart); i <= rowend; i++){
                sol.push_back(matrix[i][colend]);
                count++;
            }
            colend--;
            if(count == matrix.size() * matrix[0].size()) break;
            
            for(int i(colend); i >= colstart; i--){
                sol.push_back(matrix[rowend][i]);
                count++;
            }
            rowend--;
            if(count == matrix.size() * matrix[0].size()) break;
            
            for(int i(rowend); i >= rowstart; i--){
                sol.push_back(matrix[i][colstart]);
                count++;
            }
            colstart++;
            if(count == matrix.size() * matrix[0].size()) break;
        }
        return sol;
    }
};