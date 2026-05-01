class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        int a = nums1.size();
        int b = nums2.size();
        int i = 0, j = 0;

        vector<int> uni;

        while (i < a && j < b) {
            if (nums1[i] <= nums2[j]) {
                if (uni.size() == 0 || uni.back() != nums1[i]) {
                    uni.push_back(nums1[i]);
                }
                i++;
            } else {
                if (uni.size() == 0 || uni.back() != nums2[j]) {
                    uni.push_back(nums2[j]);
                }
                j++;
            }
        }

        while (i < a) {
            if (uni.size() == 0 || uni.back() != nums1[i]) {
                uni.push_back(nums1[i]);
            }
            i++;
        }

        while (j < b) {
            if (uni.size() == 0 || uni.back() != nums2[j]) {
                uni.push_back(nums2[j]);
            }
            j++;
        }

        return uni;
    }
};