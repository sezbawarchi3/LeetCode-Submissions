class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int st = 0, end = arr.size() - 1;
        int mid;
        while(true){
            mid = st + (end - st)/2;
            if(arr[mid + 1] < arr[mid] && arr[mid - 1] < arr[mid]){
                return mid;
            }
            else if(arr[mid + 1] > arr[mid]){
                st = mid;
            }
            else{
                end = mid;
            }
        }
        return -1;
    }
};