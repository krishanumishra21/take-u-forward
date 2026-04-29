class Solution {
public:
    int largestElement(vector<int>& nums) {
        int n=nums.size();
        int maxm=INT_MIN;
        for(int i=0;i<n;i++){
            maxm=max(maxm,nums[i]);
        }
return maxm;
    }
};