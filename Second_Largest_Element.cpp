class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        int largest = INT_MIN;

      
        for (int i = 0; i < nums.size(); i++) {
            largest = max(largest, nums[i]);
        }

        int second = INT_MIN;

       
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != largest && nums[i] > second) {
                second = nums[i];
                break;
            }
        }

        return (second == INT_MIN) ? -1 : second;
    }
};