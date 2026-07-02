class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int st = 0, end = arr.size() - 1;
        if (end == 0) return arr[0];
        
        while(st <= end){
            int mid = st + (end - st)/2;
            
            if(mid == 0 && arr[mid] != arr[mid+1]) return arr[mid];
            if(mid == arr.size()-1 && arr[mid] != arr[mid-1]) return arr[mid];
            
            if(mid > 0 && mid < arr.size() - 1 && arr[mid + 1] != arr[mid] && arr[mid - 1] != arr[mid]) return arr[mid];
            
            if(mid % 2 == 0){
                if(arr[mid + 1] == arr[mid]) {
                    st = mid + 1;
                }
                else {
                    end = mid - 1;
                }
            }
            else {
                if(arr[mid - 1] == arr[mid]) {
                    st = mid + 1;
                }
                else {
                    end = mid - 1;
                }
            }
        }
        return -1;
    }
};