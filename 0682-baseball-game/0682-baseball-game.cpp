class Solution {
public:
    int calPoints(vector<string>& operation) {
        vector<int> result;
        for(int i{0}; i < operation.size(); i++){
            if(operation[i] == "+") result.push_back(result[result.size() - 1] + result[result.size() - 2]);
            else if(operation[i] == "C") result.pop_back();
            else if(operation[i] == "D") result.push_back(result[result.size() - 1] * 2);
            else {
                int num = 0, sign = 1, j = 0;
                string s = operation[i];
                if(s[0] == '-'){
                    sign = -1;
                    j++;
                }
                for(; j < s.size(); j++){
                    
                    num = num * 10 + (s[j] - '0');
                }
                result.push_back(num * sign);
            }
        }
        int sum = 0;
        for(int n : result){
            sum += n;
        }
        return sum;
    }
};