class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
        int n=nums.size();
        vector <int> ans;
        
        int maxm=nums[n-1];
        ans.push_back(maxm);
        for(int i=n-2;i>=0;i--){
            if(nums[i]>maxm){
                maxm=nums[i];
                ans.push_back(nums[i++]);
            }
        }
        reverse(ans.begin(),ans.end());
      return ans;
    }
};