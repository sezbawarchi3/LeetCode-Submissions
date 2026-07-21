class Solution {
public:
    void nextPermutation(vector<int>& n) {
        int i = n.size() - 2, piv{-1};
        while(i >= 0){
            if(n[i] < n[i+1]){
                piv = i;
                break;
            }
            i--;
        }
        
        if(piv == -1) {
            reverse(n.begin(), n.end());
            return;
        }
        i = n.size() - 1;
        while(i >= 0){
            if(n[i] > n[piv]){
                swap(n[i], n[piv]);
                i = piv + 1;
                break;
            }
            i--;
        }

        reverse(n.begin() + i, n.end());
    }
};