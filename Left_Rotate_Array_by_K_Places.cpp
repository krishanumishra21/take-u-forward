class Solution {
public:
    void rotateArray(vector<int>& nums, int k) {
   
    int a=nums.size();
    k=k%a;
   
    reverse(nums.begin(),nums.begin()+k);
    reverse(nums.begin()+k,nums.end());
    reverse(nums.begin(),nums.end());


    }
};