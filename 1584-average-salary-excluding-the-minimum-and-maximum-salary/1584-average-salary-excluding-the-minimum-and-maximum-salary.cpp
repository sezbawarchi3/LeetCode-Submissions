class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(), salary.end());
        int i{1}, sum = 0;
        while(i < salary.size() - 1){
            sum += salary[i++];
        }
        return (double)sum/(i - 1);
    }
};