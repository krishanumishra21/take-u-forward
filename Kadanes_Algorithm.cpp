class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int current=nums[0];
        int maximum=nums[0];
        int n=nums.size();
        for(int i=0;i<n;i++){
          current=  max(nums[i],current+nums[i]);
          maximum=max(maximum,current);
        }
        return maximum;
    }
};