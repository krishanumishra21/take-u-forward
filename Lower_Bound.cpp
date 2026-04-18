class Solution{
public:
    int lowerBound(vector<int> &nums, int x){
        for(int i=0;i<nums.size();i++){
            if(i<nums[i]){
                return i;
                break;
            }
        }
        return nums.size();
    }
};