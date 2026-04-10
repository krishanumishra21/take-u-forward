class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
        vector<int> nums1;
        int n = nums.size();

        for(int i = 0; i < n; i++) {
            bool isLeader = true;

            for(int j = i + 1; j < n; j++) {
                if(nums[i] <= nums[j]) {
                    isLeader = false;
                    break;
                }
            }

            if(isLeader) {
                nums1.push_back(nums[i]);
            }
        }

        return nums1;
    }
};