class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size(), n = nums2.size();
        multiset<int> orderedMap;
        for (int i{0}; i < m; i++){
            orderedMap.insert(nums1[i])++;
        }
        for (int i{0}; i < n; i++){
            orderedMap.insert(nums2[i])++;
        }
        auto med = orderedMap.begin();
        for (int i{0}; i < (m+n)/2; i++){
            med++;
        }
        if ((m + n) %2 == 1){
            return *med ;
        }
        double medx = ((*med--)) + ((*med));
        return (medx)/2;
    }
};