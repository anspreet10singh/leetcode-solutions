class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector <int> nums;
        for(int i = 0; i < nums1.size(); i++) {
            nums.push_back(nums1[i]);
        }
        for(int i = 0; i < nums2.size(); i++) {
            nums.push_back(nums2[i]);
        }
        sort(nums.begin(), nums.end());
        
        if (nums.size() % 2 != 0) {
            int sz = nums.size() / 2;
            int element = sz;
            return nums[element];
        }
        if (nums.size() % 2 == 0) {
            int sz = nums.size() / 2;
            int element1 = sz;
            int element2 = sz - 1;
            return (nums[element1] + nums[element2]) / 2.0;
        }
        return -1;
    }
};